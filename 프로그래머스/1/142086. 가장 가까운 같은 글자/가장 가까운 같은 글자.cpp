#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    int n= s.size();
    
    for(int i= n - 1; i >= 0; i--)
    {
        bool b = false;
        for(int j = i - 1; j >= 0; j--)
        {
            if(s[i] == s[j])
            {
                answer.push_back(i-j);
                b = true;
                break;
            }
        }
        if(!b) answer.push_back(-1);
    }
    
    reverse(answer.begin(), answer.end());
    
    return answer;
}