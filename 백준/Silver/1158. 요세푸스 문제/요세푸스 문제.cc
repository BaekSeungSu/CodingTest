// 백준 1158 : 요세푸스 문제

#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	int N, K;
	cin >> N >> K;
	queue<int> Q;

	for (int i = 1; i <= N; i++)
	{
		Q.push(i);
	}

	cout << "<";
	while (!Q.empty())
	{
		for (int i = 0; i < K - 1; i++)
		{
			Q.push(Q.front());
			Q.pop();
		}
		cout << Q.front();
		Q.pop();
		if (Q.size()) cout << ", ";
	}
	cout << ">";

	return 0;
}
