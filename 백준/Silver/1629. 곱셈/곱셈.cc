// 백준 1629 : 곱셈

#include<bits/stdc++.h>

using namespace std;
using ll = long long;

ll POW(ll A, ll B, ll C)
{
	if (B == 1) return A % C;
	ll val = POW(A, B / 2, C);
	val = val * val % C;
	if (B % 2 == 0) return val;
	return val * A % C;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	ll a, b, c;
	cin >> a >> b >> c;
	cout << POW(a, b, c);

}