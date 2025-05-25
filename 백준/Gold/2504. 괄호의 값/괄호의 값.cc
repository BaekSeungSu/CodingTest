// 백준 2504 : 괄호의 값

#include<bits/stdc++.h>
using namespace std;


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int result = 0, tmp = 1;

	string s;
	cin >> s;
	stack<char> A;
	bool isDone = true;


	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == '(')
		{
			A.push(s[i]);
			tmp *= 2;
		}
		else if (s[i] == ')')
		{
			if (A.empty() || A.top() != '(')
			{
				isDone = false;
				break;
			}
			if (s[i - 1] == '(')
			{
				result += tmp;
				tmp /= 2;
				A.pop();
			}
			else
			{
				tmp /= 2;
				A.pop();
			}
		}
		else if (s[i] == '[')
		{
			A.push(s[i]);
			tmp *= 3;
		}
		else if (s[i] == ']')
		{
			if (A.empty() || A.top() != '[')
			{
				isDone = false;
				break;
			}
			if (s[i - 1] == '[')
			{
				result += tmp;
				tmp /= 3;
				A.pop();
			}
			else
			{
				tmp /= 3;
				A.pop();
			}
		}
	}

	if (!A.empty()) isDone = false;

	if (isDone)
	{
		cout << result;
	}
	else
	{
		cout << "0";
	}

	return 0;
}