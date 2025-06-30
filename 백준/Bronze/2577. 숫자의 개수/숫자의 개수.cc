#include<bits/stdc++.h>
using namespace std;

int arr[10];

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	int A, B, C;
	cin >> A >> B >> C;

	long long sum = A * B * C;

	string s = to_string(sum);

	for (char c : s)
	{
		arr[c - '0']++;
	}

	for (int i : arr)
	{
		cout << i << '\n';
	}
	

}