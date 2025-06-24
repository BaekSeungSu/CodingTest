#include <string>
#include <vector>

using namespace std;

string solution(vector<int> numLog) {
    string answer = "";
    
    for(int i = 1; i<numLog.size() ; i++)
    {
        int prev = numLog[i - 1];
        int now = numLog[i];
        if(prev + 1 == now)
        {
            answer += 'w';
        }
        else if(prev + 10 == now)
        {
            answer += 'd';
        }
        else if(prev - 1 == now)
        {
            answer += 's';
        }
        else if(prev - 10 == now)
        {
            answer += 'a';
        }
    }
    
    return answer;
}