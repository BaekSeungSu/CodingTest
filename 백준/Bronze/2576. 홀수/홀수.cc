// 백준 2576번 : 홀수
#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int Sum = 0;
	int Min = 100;

	for (int i = 0; i < 7; i++)
	{
		int A;
		cin >> A;
		if (A % 2 == 1) {
			Sum += A;
			if (Min > A) {
				Min = A;
			}
		}
	}

	
	if (Sum > 0) {
		cout << Sum << "\n" << Min;
	}
	else {
		cout << "-1";
	}

	return 0;
}