// 백준 10026 : 적록색약
#include<bits/stdc++.h>
#define X first
#define Y second
using namespace std;

static int dx[] = { 1, 0, -1, 0 };
static int dy[] = { 0, 1, 0, -1 };

string board[101];
bool vis[101][101];
int N;

void BFS(int x, int y, char type)
{
	queue<pair<int, int>> q;
	q.push({ x,y });
	vis[x][y] = true;

	while (!q.empty())
	{
		pair<int, int> cur = q.front(); q.pop();

		for (int i = 0; i < 4; i++)
		{
			int nx = cur.X + dx[i];
			int ny = cur.Y + dy[i];

			if (nx < 0 || ny < 0 || nx >= N || ny >= N) continue;
			if (vis[nx][ny] || board[nx][ny] != type) continue;
			q.push({ nx, ny });
			vis[nx][ny] = true;
		}
	}

}

int main()
{
	int ans1 = 0, ans2 = 0;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		string s;
		cin >> s;
		board[i] = s;
	}

	for(int i=0; i<N; i++)
		for (int j = 0; j < N; j++)
		{
			if (board[i][j] == 'R' && !vis[i][j])
			{
				BFS(i, j, 'R');
				ans1++;
			}
			else if (board[i][j] == 'G' && !vis[i][j])
			{
				BFS(i, j, 'G');
				ans1++;
			}
			else if (board[i][j] == 'B' && !vis[i][j])
			{
				BFS(i, j, 'B');
				ans1++;
			}
		}

	for (int i = 0; i < N; i++)
	{
		fill(vis[i], vis[i] + 101, false);
		for (int j = 0; j < N; j++)
		{
			if (board[i][j] == 'G')
			{
				board[i][j] = 'R';
			}
		}
	}

	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
		{
			if (board[i][j] == 'R' && !vis[i][j])
			{
				BFS(i, j, 'R');
				ans2++;
			}
			else if (board[i][j] == 'B' && !vis[i][j])
			{
				BFS(i, j, 'B');
				ans2++;
			}
		}

	cout << ans1 << ' ' << ans2;
}