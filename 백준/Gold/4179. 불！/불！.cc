// 백준 4179 : 불!
#include<bits/stdc++.h>
#define X first
#define Y second

using namespace std;

static int dx[] = { 1, 0, -1, 0 };
static int dy[] = { 0, 1, 0, -1 };

string maze[1002];
int fire[1002][1002];
int jihun[1002][1002];

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int R, C;
	cin >> R >> C;

	for (int i = 0; i < R; i++)
	{
		fill(fire[i], fire[i] + C, -1);
		fill(jihun[i], jihun[i] + C, -1);
	}

	for (int i = 0; i < R; i++)
	{
		cin >> maze[i];
	}

	queue<pair<int, int>> Q1;
	queue<pair<int, int>> Q2;

	for (int i = 0; i < R; i++)
	{
		for (int j = 0; j < C; j++) 
		{
			if (maze[i][j] == 'F')
			{
				fire[i][j] = 0;
				Q1.push({ i, j });
			}
			if (maze[i][j] == 'J')
			{
				jihun[i][j] = 0;
				Q2.push({ i, j });
			}
		}
	}

	while (!Q1.empty())
	{
		pair<int, int> cur = Q1.front();
		Q1.pop();
		for (int i = 0; i < 4; i++)
		{
			int nx = cur.X + dx[i];
			int ny = cur.Y + dy[i];

			if (nx < 0 || ny < 0 || nx >= R || ny >= C) continue;
			if (fire[nx][ny] >= 0 || maze[nx][ny] == '#') continue;
			fire[nx][ny] = fire[cur.X][cur.Y] + 1;
			Q1.push({ nx, ny });
		}
	}

	while (!Q2.empty())
	{
		pair<int, int> cur = Q2.front();
		Q2.pop();
		for (int i = 0; i < 4; i++)
		{
			int nx = cur.X + dx[i];
			int ny = cur.Y + dy[i];

			if (nx < 0 || ny < 0 || nx >= R || ny >= C)
			{
				cout << jihun[cur.X][cur.Y] + 1;
				return 0;
			}
			if (jihun[nx][ny] >= 0 || maze[nx][ny] == '#') continue;
			if (fire[nx][ny] != -1 && fire[nx][ny] <= jihun[cur.X][cur.Y] + 1) continue;
			jihun[nx][ny] = jihun[cur.X][cur.Y] + 1;
			Q2.push({ nx, ny });
		}
	}

	cout << "IMPOSSIBLE";
	
	return 0;
}