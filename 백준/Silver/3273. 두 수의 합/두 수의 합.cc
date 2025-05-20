// 백준 3273 : 두 수의 합

#include<bits/stdc++.h>
using namespace std;

int Arr[100001];

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int N, X, result = 0;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> Arr[i];
	}
	cin >> X;

	sort(Arr, Arr + N);

	int s = 0;
	int e = N - 1;

	while(s < e)
	{
		if (Arr[s] + Arr[e] == X)
		{
			result++;
			s++;
			e--;
		}
		else if (Arr[s] + Arr[e] > X)
		{
			e--;
		}
		else 
		{
			s++;
		}
	}

	cout << result;

	return 0;
}
