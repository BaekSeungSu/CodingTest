#include <string>
#include <vector>
#include <sstream>
#include <map>

using namespace std;

int convertDay(string date)
{
    int year = stoi(date.substr(0, 4));
    int month = stoi(date.substr(5, 2));
    int day = stoi(date.substr(8, 2));
    
    return year * 12 * 28 + month * 28 + day;
}

vector<int> solution(string today, vector<string> terms, vector<string> privacies) {
    vector<int> answer;
    
    int tday = convertDay(today);
    map<char, int> term_map;
    
    for(int i=0; i<terms.size(); i++)
    {
        stringstream ss(terms[i]);
        char type;
        int duration;
        ss >> type >> duration;
        term_map[type] = duration;
    }
    
    for(int i=0; i<privacies.size(); i++)
    {
        stringstream ss(privacies[i]);
        string date;
        char type;
        ss >> date >> type;
        int pday = convertDay(date);
        
        if(tday >= pday + term_map[type] * 28) answer.push_back(i+1);
        
    }
    
    return answer;
}