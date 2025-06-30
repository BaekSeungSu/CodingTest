#include<bits/stdc++.h>
using namespace std;

int arr[26];

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	string s;
	cin >> s;

	for (char c : s)
	{
		arr[c - 'a']++;
	}

	for (int i : arr)
	{
		cout << i << " ";
	}

}