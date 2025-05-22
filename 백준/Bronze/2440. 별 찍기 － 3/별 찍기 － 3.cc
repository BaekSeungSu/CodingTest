// 백준 2440번 : 별 찍기 - 3
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
		for (int j = i; j> 0; j--)
		{
			cout << '*';
		}
		cout << '\n';
	}
	

	return 0;
}