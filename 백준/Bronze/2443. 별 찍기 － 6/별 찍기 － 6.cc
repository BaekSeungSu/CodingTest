// 백준 2443번 : 별 찍기 - 6
#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int N;
	cin >> N;

	for (int i = N; i > 0; i--)
	{
		for (int j = N; j > i; j--)
		{
			cout << " ";
		}
		for (int j = 0; j< 2*i-1; j++)
		{
			cout << "*";
		}
		cout << "\n";
	}

	return 0;
}