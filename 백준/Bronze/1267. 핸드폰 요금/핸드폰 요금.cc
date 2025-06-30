#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr), cout.tie(nullptr);

	// 영식 30초 10
	// 민식 60초 15

	int N, Young = 0, Min = 0;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		int time;
		cin >> time;
		Young += (time / 30 + 1) * 10;
		Min += (time / 60 + 1) * 15;
	}

	if (Min > Young)
	{
		cout << "Y " << Young;
	}
	else if (Min < Young)
	{
		cout << "M " << Min;
	}
	else
	{
		cout << "Y M " << Young;
	}
}