#include <string>
#include <vector>

using namespace std;

string solution(string s, int n) {
    string answer = "";

    for (char c : s)
    {
        if (c != ' ')
        {
            if(c <'a')
            {
                if(c + n > 'Z') answer.push_back(c + n -26);
                else answer.push_back(c + n);
            }
            else
            {
                if(c + n > 'z') answer.push_back(c + n - 26);
                else answer.push_back(c + n);
            }
            
        }
        else
        {
            answer.push_back(c);
        }
    }

    return answer;
}