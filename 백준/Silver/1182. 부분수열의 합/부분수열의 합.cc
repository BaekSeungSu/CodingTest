// 백준 1182 : 부분수열의 합
#include<bits/stdc++.h>
using namespace std;

int N, S;
bool isused[21];
int arr[21];
int cnt = 0;

void func(int cur, int tot)
{
	if (cur == N)
	{
		if (tot == S) cnt++;
		return;
	}

	func(cur + 1, tot);
	func(cur + 1, tot + arr[cur]);
}


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	cin >> N >> S;

	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}

	func(0, 0);

	if (S == 0) cnt--;
	cout << cnt;
}