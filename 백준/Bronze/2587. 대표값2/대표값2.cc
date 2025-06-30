#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr), cout.tie(nullptr);
	
	int arr[5], result = 0;
	
	for (int i = 0; i < 5; i++)
	{
		cin >> arr[i];
		result += arr[i];
	}

	sort(arr, arr + 5);


	cout << result / 5 << '\n';
	cout << arr[2];
}