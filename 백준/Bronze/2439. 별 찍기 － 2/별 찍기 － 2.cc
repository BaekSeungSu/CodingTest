// 백준 2439번 : 별 찍기 - 2
#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int N;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		int j = 0;
		for (; j < N - i - 1; j++)
		{
			cout << " ";
		}
		for (; j < N; j++)
		{
			cout << "*";
		}
		cout << "\n";
	}

	return 0;
}