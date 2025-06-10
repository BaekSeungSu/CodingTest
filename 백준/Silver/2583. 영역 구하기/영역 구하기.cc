// 백준 2583 : 영역 구하기
#include<bits/stdc++.h>
#define X first
#define Y second
using namespace std;
static int dx[] = { 1, 0, -1, 0 };
static int dy[] = { 0, 1, 0, -1 };

int N, M, K;
vector<vector<int>> board;
vector<vector<bool>> vis;

int BFS(int x, int y)
{
	int sum = 1;
	queue<pair<int, int>> Q;
	Q.push({ x,y });
	vis[x][y] = true;

	while (!Q.empty())
	{
		pair<int, int> cur = Q.front();
		Q.pop();
		for (int dir = 0; dir < 4; dir++)
		{
			int nx = cur.X + dx[dir];
			int ny = cur.Y + dy[dir];
			if (nx < 0 || ny < 0 || nx >= N || ny >= M) continue;
			if (board[nx][ny] == -1 || vis[nx][ny]) continue;
			Q.push({ nx, ny });
			vis[nx][ny] = true;
			sum++;
		}
	}
	return sum;
}

int main()
{
	int count = 0;
	vector<int> ans;
	cin >> N >> M >> K;

	board = vector<vector<int>>(N, vector<int>(M, 0));
	vis = vector<vector<bool>>(N, vector<bool>(M, false));

	for (int i = 0; i < K; i++)
	{
		int x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;

		for (int j = y1; j < y2; j++)
		{
			for (int k = x1; k < x2; k++) {
				board[j][k] = -1;
			}
		}
	}


	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			if (board[i][j] == 0 && vis[i][j] == false)
			{
				ans.push_back(BFS(i, j));
				count++;
			}
		}
	}

	sort(ans.begin(), ans.end());

	cout << count << '\n';
	for (int i : ans)
	{
		cout << i << ' ';
	}
}