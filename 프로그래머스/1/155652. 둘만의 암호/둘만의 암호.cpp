#include <string>
#include <vector>

using namespace std;

bool check(char c, string skip)
{
    for(int i=0; i<skip.size(); i++)
    {
        if(c == skip[i]) return true;
    }
    return false;
}

string solution(string s, string skip, int index) {
    string answer = "";
    
    
    for(char c : s)
    {
        for(int i = 0; i< index;)
        {
            c+=1;
            if(c == 'z' + 1) c = 'a';
            if(!check(c, skip)) i++;
        }
        answer+=c;
    }
    return answer;
}