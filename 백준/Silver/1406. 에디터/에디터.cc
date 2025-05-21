// 백준 1406 : 에디터

#include<bits/stdc++.h>
#include<list>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	string s;
	cin >> s;
	int N = s.size();
	int M;
	cin >> M;

	list<char> l;

	for (int i = 0; i < N; i++)
	{
		l.push_back(s[i]);
	}

	list<char>::iterator cursor = l.end();

	for (int i = 0; i < M; i++)
	{
		char A, B;
		cin >> A;

		if (A == 'L' && cursor != l.begin())
		{
			cursor--;
		}
		else if (A == 'D' && cursor != l.end())
		{
			cursor++;
		}
		else if (A == 'B' && cursor != l.begin())
		{
			cursor--;
			cursor = l.erase(cursor);
		}
		else if (A == 'P')
		{
			cin >> B;
			l.insert(cursor, B);
		}

	}

	for (auto i : l)
	{
		cout << i;
	}

	return 0;
}
