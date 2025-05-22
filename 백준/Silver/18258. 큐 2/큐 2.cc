// 백준 18258 : 큐 2

#include<bits/stdc++.h>

using namespace std;

const long long MX = 2000001;
long long dat[MX];
long long head = 0, tail = 0;

void push(int x)
{
	dat[tail] = x;
	tail++;
}

void pop()
{
	if (head == tail) cout << "-1" << "\n";
	else
	{
		cout << dat[head] << "\n";
		head++;
	}
}

void size()
{
	cout << tail - head << "\n";
}

void empty()
{
	if (head == tail) cout << "1" << "\n";
	else cout << "0" << "\n";
}

void front()
{
	if (head == tail) cout << "-1" << "\n";
	else cout << dat[head] << "\n";
}

void back()
{
	if (head == tail) cout << "-1" << "\n";
	else cout << dat[tail - 1] << "\n";
}

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

		if (s == "push")
		{
			int x;
			cin >> x;
			push(x);
		}
		else if (s == "pop")
		{
			pop();
		}
		else if (s == "size")
		{
			size();
		}
		else if (s == "empty")
		{
			empty();
		}
		else if (s == "front")
		{
			front();
		}
		else if (s == "back")
		{
			back();
		}
	}
}