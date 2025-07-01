#include<bits/stdc++.h>
#define X first
#define Y second
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	int F, S, G, U, D;
	cin >> F >> S >> G >> U >> D;

	vector<int> dist(F + 1, -1);
	dist[0] = 0;
	dist[S] = 0;
	queue<int> q;
	q.push(S);

	while (dist[G] == -1 && !q.empty())
	{
		int cur = q.front();
		q.pop();
		for (int nxt : {cur + U, cur - D})
		{
			if (nxt < 0 || nxt > F) continue;
			if (dist[nxt] != -1) continue;
			dist[nxt] = dist[cur] + 1;
			q.push(nxt);
		}
	}
	
	if (dist[G] == -1)
	{
		cout << "use the stairs";
	}
	else
	{
		cout << dist[G];
	}
	
	
}