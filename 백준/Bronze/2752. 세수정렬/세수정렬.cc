#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr), cout.tie(nullptr);

	int A, B, C;
	cin >> A >> B >> C;
	int D, E, F;
	D = min({ A, B, C });
	F = max({ A, B, C });
	E = A + B + C - D - F;
	cout << D << ' ' << E << ' ' << F;

}