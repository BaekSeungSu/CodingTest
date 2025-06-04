#include <string>
#include <vector>
#include <regex>

using namespace std;

int solution(string s) {
    vector<string> V1 = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    vector<string> V2 = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9"};
    
    for(int i=0; i<V1.size(); i++)
    {
        s = regex_replace(s, regex(V1[i]), V2[i]);
    }
    
    return stoi(s);
}