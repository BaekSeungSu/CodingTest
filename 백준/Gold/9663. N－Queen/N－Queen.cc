// 백준 9663 : N-Queen
#include<bits/stdc++.h>
using namespace std;
int N;
int cnt = 0;
bool isused1[40], isused2[40], isused3[40];

void func(int cur)
{
	if (cur == N)
	{
		cnt++;
		return;
	}

	for (int i = 0; i < N; i++)
	{
		if (isused1[i] || isused2[i + cur] || isused3[cur - i + N - 1]) continue;
		isused1[i] = 1;
		isused2[cur + i] = 1;
		isused3[cur - i + N - 1] = 1;
		func(cur + 1);
		isused1[i] = 0;
		isused2[cur + i] = 0;
		isused3[cur - i + N - 1] = 0;
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	cin >> N;

	func(0);
	cout << cnt;
}