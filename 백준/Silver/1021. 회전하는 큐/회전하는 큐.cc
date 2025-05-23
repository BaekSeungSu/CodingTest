// 백준 1021 : 회전하는 큐

#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int N, M, result= 0;
	cin >> N >> M;

	deque<int> d;
	for (int i = 1; i <= N; i++)
	{
		d.push_back(i);
	}

	for (int i = 0; i < M; i++)
	{
		int t;
		cin >> t;
		int idx = find(d.begin(), d.end(), t) - d.begin();
		while (d.front()!=t)
		{
			if (idx < d.size() - idx)
			{
				d.push_back(d.front());
				d.pop_front();
			}
			else {
				d.push_front(d.back());
				d.pop_back();
			}
			result++;
		}
		d.pop_front();
	}
	cout << result;


	return 0;
}
