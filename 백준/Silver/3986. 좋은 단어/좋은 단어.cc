// 백준 : 
#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);


	int n, ans = 0;
	cin >> n;

	while (n--)
	{
		string s;
		cin >> s;

		stack<char> myStack;
		myStack.push(s[0]);


		for (int i = 1; i < s.size(); i++)
		{
			if (!myStack.empty() && s[i] == myStack.top())
			{
				myStack.pop();
			}
			else
			{
				myStack.push(s[i]);
			}
		}

		if (myStack.empty())
		{
			ans++;
		}

	}
	cout << ans;
}