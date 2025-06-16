#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string solution(string X, string Y) {
    string answer = "";
    int countX[10] = {};
    int countY[10] = {};
    
    for(char c : X)
    {
        countX[c - '0']++;
    }
    for(char c : Y)
    {
        countY[c - '0']++;
    }
    
    for(int i=9; i>=0; i--)
    {
        int m = min(countX[i], countY[i]);
        for(int j = 0; j<m; j++)
        {
            answer+=to_string(i);
        }
    }
    
    if(answer.empty()) return "-1";
    
    if(answer[0] == '0') return "0";
    
    return answer;
}