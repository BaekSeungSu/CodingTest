// 백준 10799 : 쇠막대기

#include<bits/stdc++.h>
using namespace std;


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	string s;
	cin >> s;

	stack<char> myStack;
	int count = 0;

	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == '(')
		{
			myStack.push(s[i]);
		}
		else // s[i] == ')'
		{
			if (s[i - 1] == '(') {
				myStack.pop();
				count += myStack.size();
			}
			else {
				myStack.pop();
				count++;
			}
		}
	}
	cout << count;

	return 0;
}
