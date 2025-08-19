// 백준 10828 : 스택
#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	int n;
	cin >> n;
	stack<int> myStack;

	for (int i = 0; i < n; i++)
	{
		string s;
		cin >> s;
		if (s == "push")
		{
			int x;
			cin >> x;
			myStack.push(x);
		}
		else if (s == "pop")
		{
			if (myStack.empty())
			{
				cout << -1 << '\n';
			}
			else
			{
				cout << myStack.top() << '\n';
				myStack.pop();
			}
		}
		else if (s == "size")
		{
			cout << myStack.size() << '\n';
		}
		else if (s == "empty")
		{
			if (myStack.empty())
			{
				cout << 1 << '\n';
			}
			else
			{
				cout << 0 << '\n';
			}
		}
		else // top
		{
			if (myStack.empty())
			{
				cout << -1 << '\n';
			}
			else
			{
				cout << myStack.top() << '\n';
			}
		}
	}
}