// 백준 1874 : 스택 수열 
#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	int n;
	cin >> n;
	vector<char> ans;
	stack<int> myStack;

	int cnt = 1;

	while (n--)
	{
		int k;
		cin >> k;
		while (cnt <= k)
		{
			myStack.push(cnt++);
			ans.push_back('+');
		}
		if (myStack.top() != k)
		{
			cout << "NO\n";
			return 0;
		}
		myStack.pop();
		ans.push_back('-');
	}

	for (char c : ans)
	{
		cout << c << '\n';
	}
}