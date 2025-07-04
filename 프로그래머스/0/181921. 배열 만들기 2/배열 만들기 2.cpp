#include <string>
#include <vector>

using namespace std;

vector<int> solution(int l, int r) {
    vector<int> answer;
    
    for(int i=l; i<=r; i++)
    {
        string s = to_string(i);
        bool isZeroFive = true;
        for(char c : s)
        {
            if(c != '5' && c != '0')
            {
                isZeroFive = false;
                break;
            }
        }
        if(isZeroFive) answer.push_back(i);
    }
    
    if(answer.empty()) answer.push_back(-1);
    
    return answer;
}