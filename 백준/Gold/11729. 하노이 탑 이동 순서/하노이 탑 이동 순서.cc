// 백준 11729 : 하노이 탑 이동 순서

#include<bits/stdc++.h>

using namespace std;
using ll = long long;


void func(int a, int b, int n)
{
	if (n == 1)
	{
		cout << a << ' ' << b << '\n';
		return;
	}
	func(a, 6 - a - b, n - 1);
	cout << a << ' ' << b << '\n';
	func(6 - a - b, b, n - 1);
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	int k;
	cin >> k;
	cout << (1 << k) - 1 << '\n';
	func(1, 3, k);

}