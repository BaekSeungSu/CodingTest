#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr), cout.tie(nullptr);

	int m= 99, result = 0;
	bool isodd = false;

	for (int i = 0; i < 7; i++)
	{
		int n;
		cin >> n;
		if (n % 2 == 1)
		{
			isodd = true;
			result += n;
			m = min(m, n);
		}
	}
	if (isodd) 
	{
		cout << result << '\n' << m;
	}
	else
	{
		cout << -1;
	}
}