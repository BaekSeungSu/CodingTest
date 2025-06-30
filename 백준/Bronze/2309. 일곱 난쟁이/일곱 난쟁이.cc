#include<bits/stdc++.h>
using namespace std;

int arr[9];
int sum, n1, n2;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr), cout.tie(nullptr);
	

	for (int i = 0; i < 9; i++)
	{
		int n;
		cin >> arr[i];
		sum += arr[i];
	}

	sort(arr, arr + 9);

	for (int i = 0; i < 8; i++)
	{
		for (int j = i + 1; j < 9; j++)
		{
			if (sum - arr[i] - arr[j] == 100)
			{
				n1 = i;
				n2 = j;
				break;
			}
		}
	}

	for (int i = 0; i < 9; i++)
	{
		if (i == n1 || i == n2) continue;
		cout << arr[i] << '\n';
	}
}