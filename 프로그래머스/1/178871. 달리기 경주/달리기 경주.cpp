#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

vector<string> solution(vector<string> players, vector<string> callings) {
    vector<string> answer;
    unordered_map<string, int> map;
    for(int i=0; i<players.size();i++)
    {
        map[players[i]] = i;
    }
    
    for(const string& s : callings)
    {
        int now, next;
        now = map[s];
        
        string front = players[now - 1];
        next = map[front];
        swap(players[now], players[now - 1]);
        
        map[s] = now - 1;
        map[front] = now;
        
    }
    
    
    return players;
}