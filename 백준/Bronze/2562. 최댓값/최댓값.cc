#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr), cout.tie(nullptr);
	
	int A[9];

	for (int i = 0; i < 9; i++)
	{
		cin >> A[i];
	}

	cout << *max_element(A, A + 9) << '\n';
	cout << max_element(A, A + 9) - A + 1;


}