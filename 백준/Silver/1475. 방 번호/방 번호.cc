#include<bits/stdc++.h>
using namespace std;

int arr[10];

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	string s;
	cin >> s;

	for (char c : s)
	{
		arr[c - '0']++;
	}

	int result = 0;
	for (int i = 0; i < 10; i++)
	{
		if (i == 6 || i == 9) continue;
		result = max(arr[i], result);
	}
	result = max(result, (arr[6] + arr[9] + 1) / 2);

	cout << result;
}