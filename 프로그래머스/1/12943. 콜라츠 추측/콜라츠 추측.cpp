#include <string>
#include <vector>

using namespace std;

int solution(int num) {
    int answer = 0;
    long long number = num;
    if (num == 1) return 0;
    while (number != 1) {
        if (number % 2) {
            number = number * 3 + 1;
            answer++;
        }
        else {
            number = number / 2;
            answer++;
        }
        if (answer >= 500)
            return -1;
    }
    return answer;
}