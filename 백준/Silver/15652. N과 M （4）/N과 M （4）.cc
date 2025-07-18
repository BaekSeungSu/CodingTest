// 백준 15649 : N과 M(4)
#include<bits/stdc++.h>
using namespace std;

int n, m;
int arr[10];

void func(int k)
{
	if (k == m)
	{
		for (int i = 0; i < m; i++)
		{
			cout << arr[i] << ' ';
		}
		cout << '\n';
		return;
	}

	int st = 1;
	if (k != 0) st = arr[k - 1];

	for (int i = st; i <= n; i++)
	{
		arr[k] = i;
		func(k + 1);
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	cin >> n >> m;
	func(0);
}