// 백준 13300 : 방 배정

#include<bits/stdc++.h>
using namespace std;

int N, K, cnt;
int arr[12];

int main()
{
	cin >> N >> K;

	for (int i = 0; i < N; i++)
	{
		int S, Y;
		cin >> S >> Y;

		if (S == 0) arr[Y - 1]++;
		else arr[Y + 5]++;
	}

	for (int i = 0; i < 12; i++)
	{
		if (arr[i] != 0 && arr[i] <= K) cnt++;
		if (arr[i] > K) cnt += arr[i] / K + 1;
	}

	cout << cnt;
}