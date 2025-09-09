// 백준 1926 : 그림 
#include<bits/stdc++.h>
#define X first
#define Y second
using namespace std;

int dx[] = { 1, 0, -1, 0 };
int dy[] = { 0, 1, 0, -1 };

int n, m;
vector<vector<int>> A;
vector<vector<bool>> vis;

int BFS(int x, int y)
{
	int area = 0;
	queue<pair<int, int>> q;
	q.push({ x,y });
	vis[x][y] = true;

	while (!q.empty())
	{
		pair<int, int> cur = q.front();
		q.pop();
		area++;
		for (int dir = 0; dir < 4; dir++)
		{
			int nx = cur.X + dx[dir];
			int ny = cur.Y + dy[dir];
			if (nx < 0 || ny < 0 || nx >= n || ny >= m) continue;
			if (vis[nx][ny] == true || A[nx][ny] != 1) continue;
			vis[nx][ny] = true;
			q.push({ nx, ny });
		}
	}

	return area;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	cin >> n >> m;

	A = vector<vector<int>>(n, vector<int>(m, 0));
	vis = vector<vector<bool>>(n, vector<bool>(m, false));

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> A[i][j];
		}
	}

	int count = 0, depth = 0;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (A[i][j] == 1 && vis[i][j] == false)
			{
				int nowD;
				nowD = BFS(i, j);
				depth = max(nowD, depth);
				count++;
			}
		}
	}

	cout << count << '\n' << depth;


}