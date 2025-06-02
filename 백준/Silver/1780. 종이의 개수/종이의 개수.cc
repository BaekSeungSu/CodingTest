// 백준 1780 : 종이의 개수
#include<bits/stdc++.h>
using namespace std;

int N;
vector<vector<int>> A;
int cnt[3];

bool check(int x, int y, int n)
{
	for (int i = x; i < x + n; i++)
	{
		for (int j = y; j < y + n; j++)
		{
			if (A[x][y] != A[i][j])
				return false;
		}
	}
	return true;
}

void solve(int x, int y, int z)
{
	if (check(x, y, z)) {
		cnt[A[x][y] + 1] += 1;
		return;
	}
	int n = z / 3;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			solve(x + i * n, y + j * n, n);
		}
	}


}


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr), cout.tie(nullptr);

	cin >> N;
	A = vector<vector<int>>(N, vector<int>(N));

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cin >> A[i][j];
		}
	}

	solve(0, 0, N);

	for (auto n : cnt)
	{
		cout << n << '\n';
	}

}