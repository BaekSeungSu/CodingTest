// 백준 2309번 : 일곱 난쟁이
#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	vector<int> A(9);
	int sum = 0;

	for (int i = 0; i < 9; i++)
	{
		cin >> A[i];
		sum += A[i];
	}

	sort(A.begin(), A.end());

	for (int i = 0; i < 8; i++)
	{
		for (int j = 1; j < 9; j++) {
			if (sum - A[i] - A[j] == 100) {
				for (int k = 0; k < 9; k++)
				{
					if (k == i || k == j) continue;
					cout << A[k] << "\n";
				}
				return 0;
			}
		}
	}


	return 0;
}