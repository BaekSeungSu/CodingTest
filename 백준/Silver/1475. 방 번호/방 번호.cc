// 백준 1475 : 방 번호

#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	string s;

	cin >> s;

	int Arr[10] = {};

	for (int i = 0; i < s.size(); i++)
	{
		Arr[s[i] - '0']++;
	}

	if ((Arr[6] + Arr[9]) % 2 == 1)
	{
		Arr[6] = (Arr[6] + Arr[9]) / 2 + 1;
		Arr[9] = Arr[6];
	}
	else {
		Arr[6] = (Arr[6] + Arr[9]) / 2;
		Arr[9] = Arr[6];
	}

	cout << *max_element(Arr, Arr + 10);

	return 0;
}
