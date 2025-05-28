// 백준 7569 : 토마토
#include<bits/stdc++.h>
using namespace std;

static int dz[] = { 0, 0, 0, 0, 1, -1 };
static int dy[] = { 0, 0, 1, -1, 0, 0 };
static int dx[] = { 1, -1, 0, 0, 0, 0 };
int board[103][103][103];
int dist[103][103][103];

queue<tuple<int, int, int>> Q;
int m, n, h;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> m >> n >> h;

	for (int i = 0; i < h; i++)
		for (int j = 0; j < n; j++)
			for (int k = 0; k < m; k++)
			{
				int tmp;
				cin >> tmp;
				board[i][j][k] = tmp;
				if (tmp == 1) Q.push({ i, j, k });
				if (tmp == 0) dist[i][j][k] = -1;

			}

	while (!Q.empty())
	{
		auto cur = Q.front();
		Q.pop();
		int curZ, curX, curY;
		tie(curZ, curX, curY) = cur;
		for (int dir = 0; dir < 6; dir++)
		{
			int nx = curX + dx[dir];
			int ny = curY + dy[dir];
			int nz = curZ + dz[dir];
			if (nx < 0 || ny < 0 || nz < 0 || nx >= n || ny >= m || nz >= h)continue;
			if (dist[nz][nx][ny] >= 0) continue;
			dist[nz][nx][ny] = dist[curZ][curX][curY] + 1;
			Q.push({ nz, nx, ny });
		}
	}

	int ans = 0;
	for (int i = 0; i < h; i++)
		for (int j = 0; j < n; j++)
			for (int k = 0; k < m; k++)
			{
				if (dist[i][j][k] == -1)
				{
					cout << -1 << '\n';
					return 0;
				}
				ans = max(ans, dist[i][j][k]);
			}
	cout << ans << '\n';
	return 0;
}
