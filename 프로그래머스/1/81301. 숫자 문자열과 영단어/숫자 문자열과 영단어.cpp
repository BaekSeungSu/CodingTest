#include <string>
#include <vector>
#include <regex>

using namespace std;

int solution(string s) {
    vector<string> v = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    
    for(int i=0; i<v.size(); i++)
    {
        s = regex_replace(s, regex(v[i]), to_string(i));
    }
    
    return stoi(s);
}