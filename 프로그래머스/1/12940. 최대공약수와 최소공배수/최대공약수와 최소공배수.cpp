#include <string>
#include <vector>

using namespace std;

int gcd(int a, int b) {
    int mod = a % b;
    while (mod > 0) {
        a = b;
        b = mod;
        mod = a % b;
    }
    return b;
}
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

vector<int> solution(int n, int m) {
    vector<int> answer;
    int min, max;
    
    min = gcd(n, m);
    max = lcm(n, m);

    answer.push_back(min);
    answer.push_back(max);
    return answer;
}