// 백준 10804번 : 카드 역배치
#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	vector<int> V(21);

	for (int i = 1; i <= 20; i++)
	{
		V[i] = i;
	}

	for (int i = 0; i < 10; i++)
	{
		int a, b;
		cin >> a >> b;
		reverse(V.begin() + a, V.begin() + b + 1);
	}

	for (int i = 1; i <= 20; i++)
	{
		cout << V[i] << " ";
	}

	return 0;
}