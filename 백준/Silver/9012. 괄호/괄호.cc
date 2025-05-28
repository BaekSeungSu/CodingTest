// 백준 9012 : 괄호

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int T;
	cin >> T;

	for (int i = 0; i < T; i++)
	{
		string s;
		cin >> s;
		
		stack<char> myStack;
		bool isVPS = true;

		for (int j = 0; j < s.size(); j++)
		{
			if (myStack.empty())
			{
				if (s[j] == '(') {
					myStack.push(s[j]);
				}
				else
				{
					isVPS = false;
					break;
				}
			}
			else
			{
				if (s[j] == '(') {
					myStack.push(s[j]);
				}
				else
				{
					myStack.pop();
				}
			}
		}
		if (!myStack.empty()) isVPS = false;

		if (isVPS) cout << "YES\n";
		else cout << "NO\n";
	}

	return 0;
}