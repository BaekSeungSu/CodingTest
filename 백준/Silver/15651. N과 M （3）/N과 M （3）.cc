// 백준 15649 : N과 M(3)
#include<bits/stdc++.h>
using namespace std;

int n, m;
int arr[10];
int isused[10];

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

	for (int i = 1; i <= n; i++)
	{
		if (isused[i] != 0)
		{
			arr[k] = i;
			isused[i]--;
			func(k + 1);
			isused[i]++;
		}
	}

}


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);
	
	cin >> n >> m;
	fill(isused, isused + 10, m);

	func(0);
}