// 백준 18258 : 큐 2
#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);
    
    queue<int> q;
    int n;
    cin >> n;
    while (n--) 
    {
        string s;
        cin >> s;
        if (s == "push") 
        {
            int val;
            cin >> val;
            q.push(val);
        }
        else if (s == "pop") 
        {
            if (q.empty())
            {
                cout << -1 << '\n';
            }
            else 
            {
                cout << q.front() << '\n';
                q.pop();
            }
        }
        else if (s == "size") 
        {
            cout << q.size() << '\n';
        }
        else if (s == "empty") 
        {
            cout << q.empty() << '\n';
        }
        else if (s == "front") 
        {
            if (q.empty())
            {
                cout << -1 << '\n';
            }
            else 
            {
                cout << q.front() << '\n';
            }
        }
        else 
        {
            if (q.empty())
            {
                cout << -1 << '\n';
            }
            else
            {
                cout << q.back() << '\n';
            }
        }
    }
}