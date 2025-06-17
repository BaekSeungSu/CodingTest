#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

vector<int> solution(vector<string> keymap, vector<string> targets) {
    vector<int> answer;
    unordered_map<char, int> keys;
    
    for(auto key : keymap)
    {
        for(int i=0; i<key.size(); i++)
        {
            char c = key[i];
            int count = i+1;
            if(keys.find(c) == keys.end()) keys[c] = count;
            else keys[c] = min(keys[c], count);
        }
    }
    
    for(auto s : targets)
    {
        int count = 0;
        bool possible = true;
        for(char c : s)
        {
            if(keys.find(c) == keys.end())
            {
                count = -1;
                possible = false;
                break;
            }
            count+=keys[c];
        }
        answer.push_back(count);
    }
    
    
    
    return answer;
}