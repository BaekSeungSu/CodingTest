// 백준 1919 : 애너그램 만들기
#include<bits/stdc++.h>
using namespace std;

int arr1[26], arr2[26];

int main()
{
	int cnt = 0;
	string s1, s2;
	cin >> s1;
	cin >> s2;
	for (char c : s1)
	{
		arr1[c - 'a']++;
	}
	for (char c : s2)
	{
		arr2[c - 'a']++;
	}

	for (int i = 0; i < 26; i++)
	{
		cnt += abs(arr1[i] - arr2[i]);
	}

	cout << cnt;
}