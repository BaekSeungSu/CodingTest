// 백준 2577 : 숫자의 개수

#include<bits/stdc++.h>
#include<cmath>
using namespace std;

int main()
{
	int A, B, C;
	cin >> A >> B >> C;

	int result = A * B * C;

	string s = to_string(result);

	int Arr[10] = {};

	for (int i = 0; i < s.size(); i++)
	{
		Arr[s[i] - '0']++;
	}

	for (int i = 0; i < 10; i++)
	{
		cout << Arr[i] << "\n";
	}

	return 0;
}
