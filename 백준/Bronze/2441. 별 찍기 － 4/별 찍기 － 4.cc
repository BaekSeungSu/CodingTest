// 백준 2441번 : 별 찍기 - 4
#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int N;
	cin >> N;
	
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < i; j++) {
			cout << " ";
		}

		for (int k = i; k < N; k++) {
			cout << "*";
		}
		cout << "\n";
	}

	return 0;
}