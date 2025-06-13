//백준 11728 : 배열 합치기
#include<bits/stdc++.h>
using namespace std;

int N, M;
vector<int> arr;
vector<int> tmp;

void partition(int s, int e);
void merge(int s, int e);


int main()
{
	cin >> N >> M;

	for (int i = 0; i < N + M; i++)
	{
		int val;
		cin >> val;
		arr.push_back(val);
	}

	tmp = vector<int>(N + M, 0);

	partition(0, N + M - 1);

	for (int i : arr)
	{
		cout << i << ' ';
	}
}


void partition(int s, int e)
{
	if (s < e)
	{
		int m = s + (e - s) / 2;
		partition(s, m);
		partition(m + 1, e);
		merge(s, e);
	}
}

void merge(int s, int e) 
{
	int m = s + (e - s) / 2;
	int i = s;
	int j = m + 1;
	int k = s;

	while (i <= m && j <= e)
	{
		if (arr[i] > arr[j])
		{
			tmp[k++] = arr[j++];
		}
		else
		{
			tmp[k++] = arr[i++];
		}
	}

	while (i <= m)
	{
		tmp[k++] = arr[i++];
	}
	while (j <= e)
	{
		tmp[k++] = arr[j++];
	}

	for (int x = s; x <= e; x++)
	{
		arr[x] = tmp[x];
	}
}
