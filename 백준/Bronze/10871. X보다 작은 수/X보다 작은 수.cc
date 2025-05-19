// 백준 10871번 : X보다 작은 수
#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int N, X;
	cin >> N >> X;

	for (int i = 0; i < N; i++)
	{
		int A;
		cin >> A;
		if (A < X)
		{
			cout << A << " ";
		}
	}

	return 0;
}