// 백준 9498번 : 시험 성적
#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int score;
	cin >> score;

	if (score <= 100 && score >= 90) {
		cout << "A";
	}
	else if(score >= 80)
	{
		cout << "B";
	}
	else if (score >= 70)
	{
		cout << "C";
	}
	else if (score >= 60)
	{
		cout << "D";
	}
	else
	{
		cout << "F";
	}

	return 0;
}