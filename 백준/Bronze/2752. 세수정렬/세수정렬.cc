// 백준 2752번 : 세수정렬
#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int A, B, C;
	cin >> A >> B >> C;

	if (A < B && A < C) {
		if (B < C)
			cout << A << " " << B << " " << C;
		else
			cout << A << " " << C << " " << B;
	}
	else if (B < A && B < C) {
		if (A < C)
			cout << B << " " << A << " " << C;
		else
			cout << B << " " << C << " " << A;
	}
	else {
		if (A < B)
			cout << C << " " << A << " " << B;
		else
			cout << C << " " << B << " " << A;
	}
	


	return 0;
}