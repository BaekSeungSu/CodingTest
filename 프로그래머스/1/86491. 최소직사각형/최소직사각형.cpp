#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int answer = 0;
    int tmp, max0 = 0, max1 = 0;
    for (auto n : sizes) {
        if (n[0] < n[1]) {
            tmp = n[0];
            n[0] = n[1];
            n[1] = tmp;
        }
        if(max0 < n[0])
            max0 = n[0];
        if(max1 < n[1])
            max1 = n[1];
    }

    answer = max0 * max1;

    return answer;
}