#include<bits/stdc++.h>
using namespace std;

int n, k;
int arr[100001];

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	cin >> n >> k;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	int start = 0;
	int window_sum = 0;

	for (int i = 0; i < k; i++)
	{
		window_sum += arr[i];
	}

	int max_sum = window_sum;

	for (int i = k; i < n; i++)
	{
		int j = i - k;
		window_sum = window_sum + arr[i] - arr[j];
		max_sum = max(max_sum, window_sum);
	}
	cout << max_sum;
}