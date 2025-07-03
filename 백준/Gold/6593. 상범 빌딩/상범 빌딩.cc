#include<bits/stdc++.h>
using namespace std;

int dx[] = { 0, 0, 1, -1, 0, 0 };
int dy[] = { 1, -1, 0, 0, 0, 0 };
int dz[] = { 0, 0, 0, 0, 1, -1 };

vector<vector<vector<char>>> board;
vector<vector<vector<int>>> dist;
int L, R, C;

void BFS(int z, int x, int y)
{
	dist[z][x][y] = 0;
	queue<tuple<int, int, int>> q;
	q.push({ z, x, y });

	while (!q.empty())
	{
		auto cur = q.front();
		q.pop();
		int curX, curY, curZ;
		tie(curZ, curX, curY) = cur;

		if (board[curZ][curX][curY] == 'E')
		{
			cout << "Escaped in " << dist[curZ][curX][curY] << " minute(s).\n";
			return;
		}

		for (int i = 0; i < 6; i++)
		{
			int nx = curX + dx[i];
			int ny = curY + dy[i];
			int nz = curZ + dz[i];
			if (nx < 0 || ny < 0 || nz < 0 || nx >= R || ny >= C || nz >= L) continue;
			if (dist[nz][nx][ny] >= 0 || board[nz][nx][ny] == '#') continue;
			dist[nz][nx][ny] = dist[curZ][curX][curY] + 1;
			q.push({ nz, nx, ny });
		}
	}

	if (q.empty())
	{
		cout << "Trapped!\n";
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	while (true)
	{
		cin >> L >> R >> C;

		if (L == 0 && R == 0 && C == 0) break;

		board.assign(L, vector<vector<char>>(R, vector<char>(C)));
		dist.assign(L, vector<vector<int>>(R, vector<int>(C, -1)));

		tuple<int, int, int> start;

		for (int i = 0; i < L; i++)
		{
			for (int j = 0; j < R; j++)
			{
				string s;
				cin >> s;
				for (int k = 0; k < C; k++)
				{
					board[i][j][k] = s[k];
					if (s[k] == 'S')
					{
						start = { i, j, k };
					}
				}
			}
		}

		BFS(get<0>(start), get<1>(start), get<2>(start));

	}


}