#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    int fib[100001];
    fib[0] = 0;
    fib[1] = 1;
    for (int i = 2; i <= n; i++) {
        fib[i] = (fib[i-2] + fib[i - 1])% 1234567;
    }
    answer = fib[n];


    return answer;
}