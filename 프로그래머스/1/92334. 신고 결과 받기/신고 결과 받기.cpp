#include <string>
#include <vector>
#include <sstream>
#include <map>
#include <set>

using namespace std;

vector<int> solution(vector<string> id_list, vector<string> report, int k) {
    vector<int> answer;
    
    map<string, set<string>> reported;
    map<string, int> mailCount;
    
    for(int i=0; i<report.size(); i++)
    {
        stringstream ss(report[i]);
        string s1;
        string s2;
        ss >> s1 >> s2;
        reported[s2].insert(s1);
    }
    
    for(auto [reported_user, reports_user] : reported)
    {
        if(reports_user.size() >= k)
        {
            for(string s : reports_user)
            {
                mailCount[s]++;
            }
        }
    }
    
    for(string s : id_list)
    {
        answer.push_back(mailCount[s]);
    }
    
    return answer;
}