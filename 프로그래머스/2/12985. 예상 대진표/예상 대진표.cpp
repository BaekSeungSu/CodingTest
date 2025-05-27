#include <iostream>

using namespace std;

int solution(int n, int a, int b)
{
    int answer = 0;
    int tmp;
    int count = 0;
    while (n % 2 == 0) {
        n /= 2;
        count++;
    }
    if (a > b) {
        tmp = b;
        b = a;
        a = tmp;
    }
    for (int i = 0; i < count; i++){
        answer++;
        if (a%2 == 1 && a == b - 1)
            break;
        a = a / 2 + a % 2;
        b = b / 2 + b % 2;
    }
    
    

    return answer;
}