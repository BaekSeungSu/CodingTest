// 백준 10866 : 덱

#include<bits/stdc++.h>

using namespace std;

const int MX = 1000005;
int dat[2*MX + 1];
int head = MX, tail = MX;

void push_front(int x)
{
	dat[--head] = x;
}

void push_back(int x)
{
	dat[tail++] = x;
}

void pop_front()
{
	if (head == tail) cout << "-1" << "\n";
	else
	{
		cout << dat[head] << "\n";
		head++;
	}
}

void pop_back()
{
	if (head == tail) cout << "-1" << "\n";
	else
	{
		cout << dat[tail-1] << "\n";
		tail--;
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

		if (s == "push_back")
		{
			int x;
			cin >> x;
			push_back(x);
		}
		else if (s == "push_front")
		{
			int x;
			cin >> x;
			push_front(x);
		}
		else if (s == "pop_front")
		{
			pop_front();
		}
		else if (s == "pop_back")
		{
			pop_back();
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
	return 0;
}
