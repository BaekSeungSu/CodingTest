// 백준 1012 : 유기농 배추
#include<bits/stdc++.h>
#define X first
#define Y second
using namespace std;

static int dx[] = { 1, 0, -1, 0 };
static int dy[] = { 0, 1, 0, -1 };

int N, M, K;
int A[51][51];
bool vis[51][51];

void BFS(int x, int y)
{
	queue<pair<int,int>> q;
	q.push({ x,y });
	vis[x][y] = true;

	while (!q.empty())
	{
		pair<int, int> cur = q.front();
		q.pop();
		for (int i = 0; i < 4; i++)
		{
			int nx = cur.X + dx[i];
			int ny = cur.Y + dy[i];

			if (nx < 0 || ny < 0 || nx >= N || ny >= M) continue;
			if (vis[nx][ny] || A[nx][ny] != 1) continue;
			vis[nx][ny] = true;
			q.push({ nx, ny });
		}
	}


}

int main()
{
	int T;
	cin >> T;

	for (int i = 0; i < T; i++)
	{
		for (int j = 0; j < 51; j++)
		{
			fill(A[j], A[j] + 51, 0);
			fill(vis[j], vis[j] + 51, false);
		}

		int ans = 0;
		cin >> N >> M >> K;
		for (int j = 0; j < K; j++)
		{
			int x, y;
			cin >> x >> y;

			A[x][y] = 1;
		}

		for (int j = 0; j < N; j++)
		{
			for (int k = 0; k < M; k++) {
				if (A[j][k] == 1 && !vis[j][k])
				{
					BFS(j, k);
					ans++;
				}
			}
		}
		cout << ans << '\n';
	}

}