#include <bits/stdc++.h>

using namespace std;

int solution(int a, int b, int c, int d) 
{
    int answer = 0;
    map<int, int> m;
    m[a]++;
    m[b]++;
    m[c]++;
    m[d]++;
    
    if(m.size() == 1)
    {
        return 1111 * a;
    }
    else if(m.size() == 2)
    {
        int p = 0, q = 0;
        for(auto const& [key, val] : m)
        {
            if(val == 3)
            {
                p = key;
            }
            else if( val == 1)
            {
                q = key;
            }
        }
        
        if(p !=0)
        {
            return pow(10 * p + q, 2);
        }
        else
        {
            auto it = m.begin();
            int num1 = it->first;
            int num2 = (++it)->first;
            return (num1 + num2) * abs(num1 - num2);
        }
    }
    else if(m.size() == 3)
    {
        int ans = 1;
        for(auto const& [key, val] : m)
        {
            if(val == 1)
            {
                ans *= key;
            }
        }
        return ans;
    }
    else
    {
        return m.begin()->first;
    }
    
    
    return answer;
}