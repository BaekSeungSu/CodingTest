// 백준 7576 : 토마토
#include<bits/stdc++.h>
#define X first
#define Y second

using namespace std;

int N, M;
vector<vector<int>> board;
vector<vector<int>> dist;

static int dx[] = { 1, 0, -1, 0 };
static int dy[] = { 0, 1, 0, -1 };



int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int result = 0;
	cin >> M >> N;

	board = vector<vector<int>>(N, vector<int>(M, 0));
	dist = vector<vector<int>>(N, vector<int>(M, 0));

	queue<pair<int, int>> q;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++)
		{
			cin >> board[i][j];
			if (board[i][j] == 1)
			{
				q.push(make_pair(i, j));
			}
			if (board[i][j] == 0)
			{
				dist[i][j] = -1;
			}
		}
	}

	while (!q.empty())
	{
		pair<int, int> cur = q.front();
		q.pop();
		for (int i = 0; i < 4; i++)
		{
			int nx = cur.X + dx[i];
			int ny = cur.Y + dy[i];

			if (nx < 0 || ny < 0 || nx >= N || ny >= M) continue;
			if (dist[nx][ny] >= 0)continue;
			dist[nx][ny] = dist[cur.X][cur.Y] + 1;
			q.push({ nx, ny });
		}
	}

	int ans = 0;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			if (dist[i][j] == -1) {
				cout << -1;
				return 0;
			}
			ans = max(ans, dist[i][j]);
		}
	}

	cout << ans;
	
	return 0;
}