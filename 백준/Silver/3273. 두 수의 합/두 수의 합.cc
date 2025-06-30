#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	int n, x, result = 0;
	cin >> n;

	vector<int> A(n, 0);

	for (int i = 0; i < n; i++)
	{
		cin >> A[i];
	}
	cin >> x;

	sort(A.begin(), A.end());

	int s = 0, e = n - 1;
	while (s < e)
	{
		if (A[s] + A[e] == x)
		{
			result++;
			s++;
			e--;
		}
		else if (A[s] + A[e] > x)
		{
			e--;
		}
		else
		{
			s++;
		}
	}

	cout << result;
}