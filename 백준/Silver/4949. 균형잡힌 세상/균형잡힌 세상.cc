// 백준 4949 : 균형잡힌 세상

#include<bits/stdc++.h>
using namespace std;



int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	string s;

	while(true)
	{
		getline(cin, s);
		if (s == ".") break;
		stack<char> A;
		bool isDone = true;
		for (int i = 0; i < s.size(); i++)
		{
			if (s[i] == '(')
			{
				A.push(s[i]);
			}
			else if (s[i] == ')')
			{
				if (!A.empty()) {
					if (A.top() == '(') A.pop();
					else
					{
						isDone = false;
						break;
					}
				}
				else {
					isDone = false;
					break;
				}
			}
			else if (s[i] == '[')
			{
				A.push(s[i]);
			}
			else if (s[i] == ']')
			{
				if (!A.empty()) {
					if (A.top() == '[') A.pop();
					else
					{
						isDone = false;
						break;
					}
				}
				else {
					isDone = false;
					break;
				}
			}
		}

		if (!A.empty()) isDone = false;

		if (isDone)
		{
			cout << "yes" << "\n";
		}
		else
		{
			cout << "no\n";
		}

	}

	return 0;
}

