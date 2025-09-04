// 백준 11003 : 최솟값 찾기 
#include<bits/stdc++.h>
using namespace std;


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);
	
	int n, l;
	cin >> n >> l;

	vector<int> A(n, 0);
	deque<int> dq;

	for (int i = 0; i < n; i++)
	{
		cin >> A[i];

		if (!dq.empty() && dq.front() < i - l + 1)
		{
			dq.pop_front();
		}
		while (!dq.empty() && A[dq.back()] >= A[i])
		{
			dq.pop_back();
		}
		dq.push_back(i);

		cout << A[dq.front()] << " ";
	}
	return 0;
}