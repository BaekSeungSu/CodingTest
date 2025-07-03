#include<bits/stdc++.h>
using namespace std;

int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };

int board[1001][1001];
int dist[1001][1001][2];
int N, M;

int BFS()
{
	queue<tuple<int, int, int>> q;
	q.push({ 0, 0, 0 });
	while (!q.empty())
	{
		auto cur = q.front();
		int curX, curY, broken;
		tie(curX, curY, broken) = cur;
		if (curX == N - 1 && curY == M - 1)
		{
			return dist[curX][curY][broken];
		}
		q.pop();
		for (int dir = 0; dir < 4; dir++)
		{
			int nx = curX + dx[dir];
			int ny = curY + dy[dir];
			if (nx < 0 || ny < 0 || nx >= N || ny >= M) continue;
			if (board[nx][ny] == 0 && dist[nx][ny][broken] == -1) 
			{
				dist[nx][ny][broken] = dist[curX][curY][broken] + 1;
				q.push({ nx, ny, broken });
			}

			if (!broken && board[nx][ny] == 1 && dist[nx][ny][1] == -1)
			{
				dist[nx][ny][1] = dist[curX][curY][broken] + 1;
				q.push({ nx, ny, 1 });
			}
		}
	}
	return -1;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	cin >> N >> M;

	for (int i = 0; i < N; i++)
	{
		string s;
		cin >> s;
		for (int j = 0; j < M; j++)
		{
			board[i][j] = s[j] - '0';
			dist[i][j][0] = -1;
			dist[i][j][1] = -1;
		}
	}

	dist[0][0][0] = 1;
	dist[0][0][1] = 1;
	cout << BFS();
	return 0;
}