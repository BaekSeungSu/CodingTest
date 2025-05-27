#include <string>
#include <vector>
#include <cmath>
#include <iostream>
#include <algorithm>
using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    int count = 0, zeroCount = 0, len = 0;
    string bin;
    while (s != "1") {
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '0') zeroCount++;
        }

        s.erase(remove(s.begin(), s.end(), '0'),s.end());
        len = s.size();
        while (len != 0) {
            bin.insert(0, (len % 2 == 0 ? "0" : "1"));
            len /= 2;
        }
        s = bin;
        bin.clear();
        count++;
    }
    answer.push_back(count);
    answer.push_back(zeroCount);

    return answer;
}
