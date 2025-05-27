#include <string>
#include <vector>

using namespace std;

string solution(int n) {
    string answer = "";

    while (n) {
        answer += "수";
        n--;
        if (n == 0)
            break;
        answer += "박";
        n--;
    }
    return answer;
}