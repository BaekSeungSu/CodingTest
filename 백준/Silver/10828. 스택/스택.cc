// 백준 10828 : 스택

#include<iostream>

using namespace std;

const int MX = 1000005;
int stack[MX];
int pos;

void push(int num);
void pop();
void size();
void empty();
void top();


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
			int num;
			cin >> num;
			push(num);
		}
		else if (s == "top") top();
		else if (s == "pop") pop();
		else if (s == "size") size();
		else if (s == "empty") empty();
	}


	return 0;
}


void push(int num)
{
	stack[pos] = num;
	pos++;
}

void pop()
{
	if (pos <= 0) {
		cout << "-1" << "\n";
	}
	else
	{
		cout << stack[pos-1] << "\n";
		pos--;
	}
}

void size()
{
	cout << pos << "\n";
}

void empty()
{
	if (pos <= 0) {
		cout << "1" << "\n";
	}
	else
	{
		cout << "0" << "\n";
	}
}

void top()
{
	if (pos <= 0) {
		cout << "-1" << "\n";
	}
	else
	{
		cout << stack[pos-1] << "\n";
	}
}