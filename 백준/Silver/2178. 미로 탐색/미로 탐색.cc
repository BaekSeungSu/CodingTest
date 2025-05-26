// 백준 2178 : 미로 탐색
#include<bits/stdc++.h>
#define X first
#define Y second

using namespace std;

int N, M;
vector<vector<int>> board;
vector<vector<bool>> visited;

static int dx[] = { 1, 0, -1, 0 };
static int dy[] = { 0, 1, 0, -1 };

void BFS(int x, int y)
{
	visited[x][y] = true;
	queue<pair<int, int>> q;
	q.push(make_pair(x, y));

	while (!q.empty())
	{
		pair<int, int> cur = q.front();
		q.pop();
		for (int i = 0; i < 4; i++)
		{
			int nx = cur.X + dx[i];
			int ny = cur.Y + dy[i];

			if (nx < 0 || ny < 0 || nx >= N || ny >= M) continue;
			if (visited[nx][ny] || board[nx][ny] == 0) continue;
			q.push(make_pair(nx, ny));
			board[nx][ny] = board[cur.X][cur.Y] + 1;
			visited[nx][ny] = true;
		}
	}
}

int main()
{
	cin >> N >> M;

	board = vector<vector<int>> (N, vector<int>(M, 0));
	visited = vector<vector<bool>> (N, vector<bool>(M, 0));

	for (int i = 0; i < N; i++)
	{
		string s;
		cin >> s;
		for (int j = 0; j < s.size(); j++)
		{
			board[i][j] = s[j] - '0';
		}
	}

	BFS(0, 0);

	int result = board[N - 1][M - 1];
	cout << result;

	return 0;
}