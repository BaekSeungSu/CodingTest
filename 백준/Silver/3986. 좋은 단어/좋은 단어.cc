// 백준 3986 : 좋은 단어

#include<bits/stdc++.h>
using namespace std;


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int N, result = 0;
	cin >> N;


	for (int i = 0; i < N; i++)
	{
		string s;
		cin >> s;

		bool isGood = true;
		stack<char> myStack;

		for (int i = 0; i < s.size(); i++)
		{
			if (!myStack.empty())
			{
				if (myStack.top() != s[i])
				{
					myStack.push(s[i]);
				}
				else
				{
					myStack.pop();
				}
			}
			else
			{
				myStack.push(s[i]);
			}
		}

		if (!myStack.empty()) isGood = false;
		if (isGood) result += 1;

	}

	cout << result;

	return 0;
}