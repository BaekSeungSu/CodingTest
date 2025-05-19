// 백준 2587번 : 대표값2
#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int Sum = 0;
	int Arr[5] = {};
	for (int i = 0; i < 5; i++)
	{
		cin >> Arr[i];
		Sum += Arr[i];
	}

	sort(Arr, Arr + 5);

	cout << Sum / 5 << "\n" << Arr[2];


	return 0;
}