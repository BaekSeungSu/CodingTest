// 백준 6198 : 옥상 정원 꾸미기
#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int N;
	long long ans = 0;
	cin >> N;

	stack<long long> s;

	for (int i = 0; i < N; i++)
	{
		long long height;
		cin >> height;

		while (!s.empty() && s.top() <= height) s.pop();
	
		ans += s.size();
		s.push(height);
	}
	
	cout << ans;

	return 0;
}