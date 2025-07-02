#include<bits/stdc++.h>
using namespace std;

int dx[] = { 1, 0, -1, 0 };
int dy[] = { 0, 1, 0, -1 };
int N;
vector<vector<int>> board;
vector<vector<bool>> vis;

void BFS(int a, int b, int height)
{
	vis[a][b] = true;
	queue<pair<int, int>> q;
	q.push({ a, b });

	while (!q.empty())
	{
		auto cur = q.front();
		q.pop();
		for (int dir = 0; dir < 4; dir++)
		{
			int nx = cur.first + dx[dir];
			int ny = cur.second + dy[dir];
			if (nx < 0 || ny < 0 || nx >= N || ny >= N) continue;
			if (board[nx][ny] <= height || vis[nx][ny] == true) continue;
			vis[nx][ny] = true;
			q.push({ nx, ny });
		}
	}
}


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	cin >> N;

	board = vector<vector<int>>(N, vector<int>(N, 0));

	int max_h = 0;
	
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cin >> board[i][j];
			max_h = max(max_h, board[i][j]);
		}
	}

	int max_count = 1;

	for (int h = 1; h <= max_h; h++)
	{
		vis.assign(N, vector<bool>(N, false));
		int cur_count = 0;
		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < N; j++)
			{
				if (board[i][j] > h && vis[i][j] == false)
				{
					BFS(i, j, h);
					cur_count++;
				}
			}
		}
		max_count = max(max_count, cur_count);
	}

	cout << max_count;
}