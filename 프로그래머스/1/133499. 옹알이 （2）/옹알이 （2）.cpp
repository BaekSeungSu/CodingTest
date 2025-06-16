#include <string>
#include <vector>

using namespace std;

int solution(vector<string> babbling) {
    int answer = 0;
    vector<string> sounds = {"aya", "ye", "woo", "ma"};
   
    for(const string& s : babbling)
    {
        int i = 0;
        string prev = "";
        bool possible = true;
        
        while(i < s.size())
        {
            bool match = false;
            for(const string& sound : sounds)
            {
                if(sound == prev)continue;
                if(s.substr(i, sound.size()) == sound)
                {
                    prev = sound;
                    i += sound.size();
                    match = true;
                    break;
                }
            }
            if(!match)
            {
                possible = false;
                break;
            }
        }
        if(possible) answer++;
    }
    
    
    return answer;
}