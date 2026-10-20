#include <string>
#include <vector>
#include <unordered_map>


using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    
    unordered_map<string, int> umap;
    
    for(string s : participant)
    {
        ++umap[s];
    }
    
    for(string s : completion)
    {
        --umap[s];
    }
    
   for(string s : participant)
    {
        if(umap[s] > 0 ) answer = s;
    }
    
    return answer;
}