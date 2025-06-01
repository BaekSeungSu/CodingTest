// 백준 5427 : 불
#include<bits/stdc++.h>
#define X first
#define Y second
using namespace std;

static int dx[] = { 1, 0, -1, 0 };
static int dy[] = { 0, 1, 0, -1 };

int T, N, M;
string board[1001];
int dist1[1001][1001];
int dist2[1001][1001];

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> T;
	for (int i = 0; i < T; i++)
	{
		bool possible = false;
		cin >> M >> N;

		queue<pair<int, int>> Q1;
		queue<pair<int, int>> Q2;
		

		for (int j = 0; j < N; j++)
		{
			string s;
			cin >> s;
			board[j] = s;
			fill(dist1[j], dist1[j] + M, -1);
			fill(dist2[j], dist2[j] + M, -1);
			for (int k = 0; k < M; k++)
			{
				if (board[j][k] == '@')
				{
					Q1.push({ j, k });
					dist1[j][k] = 0;
				}
				else if (board[j][k] == '*')
				{
					Q2.push({ j, k });
					dist2[j][k] = 0;
				}
			}
		}

		while (!Q2.empty())
		{
			pair<int, int> cur = Q2.front();
			Q2.pop();
			for (int dir = 0; dir < 4; dir++)
			{
				int nx = cur.X + dx[dir];
				int ny = cur.Y + dy[dir];

				if (nx < 0 || ny < 0 || nx >= N || ny >= M) continue;
				if (dist2[nx][ny] >= 0 || board[nx][ny] == '#') continue;
				dist2[nx][ny] = dist2[cur.X][cur.Y] + 1;
				Q2.push({ nx, ny });
			}
		}

		while (!Q1.empty() && !possible)
		{
			pair<int, int> cur = Q1.front();
			Q1.pop();
			for (int dir = 0; dir < 4; dir++)
			{
				int nx = cur.X + dx[dir];
				int ny = cur.Y + dy[dir];

				if (nx < 0 || ny < 0 || nx >= N || ny >= M)
				{
					cout << dist1[cur.X][cur.Y] + 1 << "\n";
					possible = true;
					break;
				}
				if (dist1[nx][ny] >= 0 || board[nx][ny] == '#') continue;
				if (dist2[nx][ny] <= dist1[cur.X][cur.Y] + 1 && dist2[nx][ny] != -1) continue;
				dist1[nx][ny] = dist1[cur.X][cur.Y] + 1;
				Q1.push({ nx, ny });
			}
		}
	
		if (!possible) cout << "IMPOSSIBLE" << "\n";


	}

	return 0;
}
