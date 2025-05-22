// 백준 1874 : 스택 수열

#include<bits/stdc++.h>

using namespace std;


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int N;
	cin >> N;

	vector<int> A(N, 0);
	vector<char> result;
	bool isCan = true;

	for (int i = 0; i < N; i++)
	{
		cin >> A[i];
	}

	stack<int> s;

	int now = 1;

	for (int i = 0; i < A.size(); i++)
	{
		if (now <= A[i])
		{
			while (now <= A[i])
			{
				s.push(now);
				now++;
				result.push_back('+');
			}
			s.pop();
			result.push_back('-');
		}
		else
		{
			int n = s.top(); 
			s.pop();
			if (n > A[i])
			{
				cout << "NO";
				isCan = false;
				break;
			}
			else
			{
				result.push_back('-');
			}
		}
	}

	if (isCan)
	{
		for (char c : result)
		{
			cout << c << "\n";
		}
	}

	return 0;
}