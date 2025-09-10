// 백준 4179 : 불
#include<bits/stdc++.h>
#define X first
#define Y second
using namespace std;

int dx[] = { 1, 0, -1, 0 };
int dy[] = { 0, 1, 0, -1 };

int n, m;
vector<vector<char>> board;
vector<vector<int>> fire;
vector<vector<int>> jihun;


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);
	
	cin >> n >> m;

	board = vector<vector<char>>(n, vector<char>(m, '.'));
	fire = vector<vector<int>>(n, vector<int>(m, -1));
	jihun = vector<vector<int>>(n, vector<int>(m, -1));

	queue<pair<int, int>> F;
	queue<pair<int, int>> J;

	for (int i = 0; i < n; i++)
	{
		string s;
		cin >> s;
		for (int j = 0; j < s.size(); j++)
		{
			if (s[j] == '#')
			{
				board[i][j] = '#';
			}
			else if (s[j] == 'J')
			{
				board[i][j] = 'J';
				jihun[i][j] = 0;
				J.push({ i,j });
			}
			else if (s[j] == 'F')
			{
				board[i][j] = 'F';
				fire[i][j] = 0;
				F.push({ i,j });
			}
		}
	}

	while (!F.empty())
	{
		auto cur = F.front();
		F.pop();

		for (int dir = 0; dir < 4; dir++)
		{
			int nx = cur.X + dx[dir];
			int ny = cur.Y + dy[dir];

			if (nx < 0 || ny < 0 || nx >= n || ny >= m) continue;
			if (fire[nx][ny] != -1 || board[nx][ny] == '#') continue;
			fire[nx][ny] = fire[cur.X][cur.Y] + 1;
			F.push({ nx, ny });
		}
	}

	while (!J.empty())
	{
		auto cur = J.front();
		J.pop();

		for (int dir = 0; dir < 4; dir++)
		{
			int nx = cur.X + dx[dir];
			int ny = cur.Y + dy[dir];
			if (nx < 0 || ny < 0 || nx >= n || ny >= m)
			{
				cout << jihun[cur.X][cur.Y] + 1;
				return 0;
			}
			if (jihun[nx][ny] != -1 || board[nx][ny] != '.') continue;
			if (fire[nx][ny] != -1 && fire[nx][ny] <= jihun[cur.X][cur.Y] + 1) continue;
			jihun[nx][ny] = jihun[cur.X][cur.Y] + 1;
			J.push({ nx, ny });
		}

	}
	cout << "IMPOSSIBLE";
	return 0;
}