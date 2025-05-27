#include <string>
#include <vector>
#include <sstream>
#include <iostream>
#include <algorithm>>
using namespace std;

string solution(string s) {
    string answer = "";
    vector<int> a;
    vector<string> words;
    stringstream ss(s);

    string word;
    while (getline(ss, word, ' ')) {
        words.push_back(word);
    }

    for (int i = 0; i < words.size(); i++) {
        a.push_back(stoi(words[i]));
    }

    int max = *max_element(a.begin(), a.end());
    int min = *min_element(a.begin(), a.end());
    
    answer = to_string(min) + ' ' + to_string(max);

    return answer;
}
