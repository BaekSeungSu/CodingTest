#include<bits/stdc++.h>
#define X first
#define Y second
using namespace std;


int dx[] = { 1, 0, -1, 0 };
int dy[] = { 0, 1, 0, -1 };
vector<vector<int>> board;
vector<vector<bool>> vis;
int N;

int BFS(int a, int b)
{
	int num = 1;
	vis[a][b] = true;
	queue<pair<int, int>> q;
	q.push({ a, b });

	while (!q.empty())
	{
		auto cur = q.front();
		q.pop();
		for (int dir = 0; dir < 4; dir++)
		{
			int nx = cur.X + dx[dir];
			int ny = cur.Y + dy[dir];
			if (nx < 0 || ny < 0 || nx >= N || ny >= N) continue;
			if (vis[nx][ny] == true || board[nx][ny] == 0) continue;
			vis[nx][ny] = true;
			q.push({ nx, ny });
			num++;
		}
	}
	return num;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);
	vector<int> house;
	cin >> N;

	board = vector<vector<int>>(N, vector<int>(N, 0));
	vis = vector<vector<bool>>(N, vector<bool>(N, false));

	for (int i = 0; i < N; i++)
	{
		string s;
		cin >> s;
		for (int j = 0; j < N; j++)
		{
			board[i][j] = s[j] - '0';
		}
	}

	int count = 0;

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (board[i][j] == 1 && vis[i][j] == false)
			{
				house.push_back(BFS(i, j));
				count++;
			}
		}
	}

	sort(house.begin(), house.end());
	cout << count << '\n';
	for (int x : house)
	{
		cout << x << '\n';
	}


}