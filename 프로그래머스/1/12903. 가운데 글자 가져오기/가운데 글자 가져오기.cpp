#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    int m = s.size() / 2;
    if (s.size() % 2 == 0){
        answer += s[m - 1];
        answer += s[m];
    }
    else
        answer = s[m];

    return answer;
}