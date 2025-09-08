// 백준 4949 : 균형잡힌 세상
#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);


	while (true)
	{
		string s;
		getline(cin, s);

		if (s == ".") break;

		stack<char> myStack;
		bool isBalanced = true;

		for (int i = 0; i < s.size(); i++)
		{
			if (s[i] == '(' || s[i] == '[')
			{
				myStack.push(s[i]);
			}
			else if (s[i] == ')')
			{
				if (!myStack.empty() && myStack.top() == '(')
				{
					myStack.pop();
				}
				else
				{
					isBalanced = false;
					break;
				}
			}
			else if (s[i] == ']')
			{
				if (!myStack.empty() && myStack.top() == '[')
				{
					myStack.pop();
				}
				else
				{
					isBalanced = false;
					break;
				}
			}
		}
		if (isBalanced && myStack.empty())
		{
			cout << "yes\n";
		}
		else
		{
			cout << "no\n";
		}
	}
}