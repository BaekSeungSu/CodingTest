// 백준 7562 : 나이트의 이동
#include<bits/stdc++.h>
#define X first
#define Y second
using namespace std;


static int dx[] = {2, 2, -2 ,-2, 1, 1, -1, -1};
static int dy[] = {1, -1, 1, -1, 2, -2, 2, -2};

int dist[301][301];

int T, N;

void BFS(int x, int y);


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> T;



	for (int i = 0; i < T; i++)
	{
		int x, y;
		pair<int, int> start;
		pair<int, int> end;
		cin >> N;

		for (int j = 0; j < N; j++)
		{
			fill(dist[j], dist[j] + N, -1);
		}

		cin >> x >> y;
		start.X = x; start.Y = y;

		cin >> x >> y;
		end.X = x; end.Y = y;

		queue<pair<int, int>> Q;
		Q.push(start);
		dist[start.X][start.Y] = 0;

		while (!Q.empty())
		{
			pair<int, int> cur = Q.front(); Q.pop();
			for (int dir = 0; dir < 8; dir++)
			{
				int nx = cur.X + dx[dir];
				int ny = cur.Y + dy[dir];

				if (nx < 0 || ny < 0 || nx >= N || ny >= N) continue;
				if (dist[nx][ny] >= 0) continue;
				dist[nx][ny] = dist[cur.X][cur.Y] + 1;
				Q.push({ nx, ny });
			}
		}

		cout << dist[end.X][end.Y] << '\n';

		
	}
	
	return 0;
}
