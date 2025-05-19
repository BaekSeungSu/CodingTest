// 백준 2562번 : 최댓값

#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	vector<pair<int, int>> A;

	for (int i = 1; i <= 9; i++)
	{
		int n;
		cin >> n;
		A.push_back(make_pair(n, i));
	}

	sort(A.begin(), A.end());

	cout << A[8].first << "\n" << A[8].second;

	return 0;
}