// 백준 2753번 : 윤년
#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int Year;
	cin >> Year;

	if ((Year % 4 == 0 && Year % 100 != 0) || Year % 400 == 0)
	{
		cout << 1;
	}
	else {
		cout << 0;
	}

	return 0;
}