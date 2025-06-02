#include <string>
#include <vector>

using namespace std;

int solution(string t, string p) {
    int answer = 0;
    int length = p.size();
    long long target = stoll(p);
    
    
    for(int i=0; i<=t.size() - length; i++)
    {
        string s = t.substr(i, length);
        long val = stoll(s);
        if(target >= val) answer++;
    }
    
    return answer;
}