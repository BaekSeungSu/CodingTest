// 백준 2445 : 별 찍기 - 9
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int N;
	cin >> N;

	for (int i = 0; i < N - 1; i++)
	{
		for (int j = 0; j < i; j++) cout << ' ';
		for (int j = 0; j < 2 * (N - i) - 1; j++) cout << '*';
		cout << '\n';
	}
	
	for (int i = 0; i < N - 1; i++) cout << ' ';
	cout << "*\n";

	for (int i = 1; i <= N - 1; i++)
	{
		for (int j = 1; j <= N - i - 1; j++) cout << ' ';
		for (int j = 1; j <= 2 * i + 1; j++) cout << '*';
		cout << '\n';
	}

}