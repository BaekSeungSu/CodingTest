// 백준 10799 : 쇠막대기 
#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	string p;
	cin >> p;

	stack<char> s;
	int ans = 0;

	for (int i = 0; i < p.size(); i++)
	{
		if (p[i] == '(')
		{
			s.push(p[i]);
		}
		else // ')'
		{
			if (p[i - 1] == '(')
			{
				s.pop();
				ans += s.size();
			}
			else //')'
			{
				s.pop();
				ans++;
			}
		}
	}
	cout << ans;
}