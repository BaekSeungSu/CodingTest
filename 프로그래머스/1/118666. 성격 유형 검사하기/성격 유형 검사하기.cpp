#include <string>
#include <vector>
#include <map>

using namespace std;

string solution(vector<string> survey, vector<int> choices) {
    string answer = "";
    int score[8] = {3, 2, 1, 0, 1, 2, 3};
    map<char, int> m;
    
    for(int i=0; i<survey.size(); i++)
    {
        int choice = choices[i];
        if(choice == 4) continue;
        
        char c1 = survey[i][0];
        char c2 = survey[i][1];
        
        if(choice < 4)
        {
            m[c1] += 4 - choice;
        }
        else
        {
            m[c2] += choice - 4;
        }
    }
    
    answer += m['R'] >= m['T'] ? 'R' : 'T';
    answer += m['C'] >= m['F'] ? 'C' : 'F';
    answer += m['J'] >= m['M'] ? 'J' : 'M';
    answer += m['A'] >= m['N'] ? 'A' : 'N';
    
    return answer;
}