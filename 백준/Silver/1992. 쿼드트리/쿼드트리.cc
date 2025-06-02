// 백준 1992 : 쿼드트리
#include<bits/stdc++.h>
using namespace std;

int N;
int Data[64][64];


bool check(int x, int y, int N)
{
	for (int i = x; i < x + N; i++)
	{
		for (int j = y; j < y + N; j++)
		{
			if (Data[i][j] != Data[x][y]) return false;
		}
	}
	return true;
}

void solve(int x, int y, int N)
{
	if (check(x, y, N))
	{	
		cout << Data[x][y];
		return;
	}

	cout << '(';
	solve(x, y, N / 2);
	solve(x, y + N / 2, N / 2);
	solve(x + N / 2, y, N / 2);
	solve(x + N / 2, y + N / 2, N / 2);
	cout << ')';
}


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	cin >> N;
	for (int i = 0; i < N; i++)
	{
		string s;
		cin >> s;
		for (int j = 0; j < N; j++)
		{
			Data[i][j] = s[j] - '0';
		}
	}

	solve(0, 0, N);

	return 0;
}

