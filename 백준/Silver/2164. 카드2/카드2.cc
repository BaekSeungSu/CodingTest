// 백준 2164 : 카드2

#include<bits/stdc++.h>

using namespace std;


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	int N;
	queue<int> q;
	cin >> N;

	for (int i = 1; i <= N; i++)
	{
		q.push(i);
	}

	while (q.size() > 1)
	{
		q.pop();
		int x = q.front();
		q.push(x);
		q.pop();
	}

	cout << q.front();

}