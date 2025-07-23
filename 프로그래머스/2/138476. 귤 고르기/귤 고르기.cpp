#include <string>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int solution(int k, vector<int> tangerine) {
    int answer = 0;
    map<int,int> m;
    for(int i=0; i<tangerine.size(); i++)
    {
        m[tangerine[i]]++;
    }
    
    vector<pair<int, int>> sortedMap(m.begin(), m.end());
    
    
    sort(sortedMap.begin(), sortedMap.end(), [](const auto &x, const auto &y)
         {
             return x.second > y.second;
         });
   
    int s = 0;
    while(k >0)
    {
        k-=sortedMap[s].second;
        s++;
        answer++;
    }
    
    
    return answer;
}