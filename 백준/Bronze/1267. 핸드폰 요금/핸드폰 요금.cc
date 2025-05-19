// 백준 1267번 : 핸드폰 요금
#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int N, total_Y = 0, total_M = 0;
	cin >> N;

	vector<int> call(N);

	for (int i = 0; i < N; i++)
	{
		cin >> call[i];
	}

	for (int i = 0; i < N; i++)
	{
		int Y, M;
		Y = (call[i] / 30 + 1) * 10;
		M = (call[i] / 60 + 1) * 15;

		total_Y += Y;
		total_M += M;
	}

	if (total_Y == total_M)
	{
		cout << "Y M" << " " << total_Y;
	}
	else if (total_Y > total_M)
	{
		cout << "M " << total_M;
	}
	else {
		cout << "Y " << total_Y;
	}

	return 0;
}