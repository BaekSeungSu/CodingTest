// 백준 10807 : 개수 세기

#include<bits/stdc++.h>
using namespace std;

int arr[202];
int N, val;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	cin >> N;
	for (int i = 0; i < N; i++)
	{
		int t;
		cin >> t;
		arr[t + 100]++;
	}
	cin >> val;
	cout << arr[val + 100];

}