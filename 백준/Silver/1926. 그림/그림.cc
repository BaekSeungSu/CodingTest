// 백준 1926 : 그림
#include<bits/stdc++.h>
#define X first
#define Y second


using namespace std;

static int dx[] = { 1, 0, -1, 0 };
static int dy[] = { 0, 1, 0, -1 };
bool visited[502][502];
int A[502][502];

int BFS(int x, int y)
{
	int width = 0;
	visited[x][y] = true;
	queue<pair<int, int>> q;
	q.push(make_pair(x, y));

	while (!q.empty())
	{
		pair<int, int> cur = q.front();
		q.pop();
		width++;
		for (int i = 0; i < 4; i++) {
			int nX = cur.X + dx[i];
			int nY = cur.Y + dy[i];

			if (nX < 0 || nY < 0 || nX >= 502 || nY >= 502) continue;
			if (visited[nX][nY] || A[nX][nY] != 1) continue;
			q.push(make_pair(nX, nY));
			visited[nX][nY] = true;
		}
	}
	return width;
}

int main()
{
	int n, m, maxW = 0, count = 0;
	cin >> n >> m;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> A[i][j];
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (!visited[i][j] && A[i][j] == 1)
			{
				int tmp;
				tmp = BFS(i, j);
				count++;
				if (tmp > maxW) maxW = tmp;
			}
		}
	}


	cout << count << "\n" << maxW;
}