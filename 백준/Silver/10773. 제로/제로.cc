// 백준 10773 : 제로

#include<bits/stdc++.h>

using namespace std;


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int K, result = 0;
	cin >> K;

	stack<int> s;

	for (int i = 0; i < K; i++)
	{
		int N;
		cin >> N;
		if (N == 0 && !s.empty()) s.pop();
		else s.push(N);
	}

	while (!s.empty())
	{
		int val;
		val = s.top();
		result += val;
		s.pop();
	}

	cout << result;

	return 0;
}