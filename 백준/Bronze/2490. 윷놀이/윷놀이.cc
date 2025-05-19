// 백준 2490번 : 윷놀이
#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int sum;
	string results = "DCBAE";


	for (int i = 0; i < 3; i++)
	{
		sum = 0;
		for (int j = 0; j < 4; j++)
		{
			int A;
			cin >> A;
			sum += A;
		}
		cout << results[sum] << "\n";
	}


	return 0;
}