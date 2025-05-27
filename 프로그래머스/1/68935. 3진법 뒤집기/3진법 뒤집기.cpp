#include <string>
#include <vector>
#include <cmath>
#include <iostream>
#
using namespace std;

int solution(int n) {
    int answer = 0;
    vector<int> three;
    while (n != 0 ) {
        three.push_back(n % 3);
        n /= 3;
    }
    for (int i = 0; i < three.size(); i++) {
        answer += three[three.size() - 1 - i] * pow(3, i);
    }
    return answer;
}

int main() {
    int n;
    n = solution(45);
    cout << n;
}