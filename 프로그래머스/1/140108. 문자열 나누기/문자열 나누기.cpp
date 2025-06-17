#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    int i=0;
    while(i < s.size())
    {
        char x = s[i];
        int check[2] = {1, 0};
        int j = i+1;
        for(;j<s.size();j++)
        {
            if(x == s[j]) check[0]++;
            else check[1]++;
            if(check[0] == check[1]) break;
        }
        answer++;
        i += check[0]+check[1];
    }
    
    
    return answer;
}