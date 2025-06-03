// 백준 11328 : Strfry
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int N;
	int arr1[26];
	int arr2[26];
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		bool isPossible = true;
		fill(arr1, arr1 + 26, 0);
		fill(arr2, arr2 + 26, 0);
		string s1, s2;
		cin >> s1 >> s2;

		for (int j = 0; j < s1.size(); j++)
		{
			arr1[s1[j] - '0' - 49]++;
		}

		for (int k = 0; k < s2.size(); k++)
		{
			arr2[s2[k] - '0' - 49]++;
		}

		for (int i = 0; i < 26; i++)
		{
			if (arr1[i] != arr2[i]) isPossible = false;
		}

		if (isPossible) cout << "Possible\n";
		else cout << "Impossible\n";
	}
}