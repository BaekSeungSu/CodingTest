// 백준 1406 : 에디터

#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int N;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		string s;
		cin >> s;

		list<char> l = {};

		auto cursor = l.begin();

		for (int i = 0; i < s.size(); i++)
		{
			if (s[i] == '<')
			{
				if (cursor != l.begin()) cursor--;
			}
			else if (s[i] == '>')
			{
				if (cursor != l.end()) cursor++;
			}
			else if (s[i] == '-')
			{
				if (cursor != l.begin())
				{
					cursor--;
					cursor = l.erase(cursor);
				}
			}
			else
			{
				l.insert(cursor, s[i]);
			}
		}

		for (auto i : l) 
		{
			cout << i;
		}

		cout << "\n";
	}
	

	return 0;
}
