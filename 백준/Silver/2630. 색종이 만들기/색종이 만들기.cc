// 백준 2630 : 색종이 만들기
#include<bits/stdc++.h>
using namespace std;

int N;
int cnt[2];
int paper[128][128];

bool check(int x, int y, int N)
{
	for (int i = x; i < x + N; i++)
	{
		for (int j = y; j < y + N; j++)
		{
			if (paper[i][j] != paper[x][y]) return false;
		}
	}
	return true;
}
void solve(int x, int y, int N)
{
	if (check(x, y, N))
	{
		cnt[paper[x][y]] += 1;
		return;
	}

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			solve(x + i * N / 2, y + j * N / 2, N / 2);
		}
	}
}


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cin >> paper[i][j];
		}
	}


	solve(0, 0, N);

	for (int i = 0; i < 2; i++) cout << cnt[i] << '\n';
}

