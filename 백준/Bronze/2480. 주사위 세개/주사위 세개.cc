// 백준 2480번 : 주사위 세개
#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	int A, B, C;
	cin >> A >> B >> C;

	if (A == B && B == C)
	{
		cout << 10000 + A * 1000;
	}
	else if (A == B || A == C)
	{
		cout << 1000 + A * 100;
	}
	else if (B == C) {
		cout << 1000 + B * 100;
	}
	else {
		int M = max({ A, B, C });
		cout << M * 100;
	}

	return 0;
}