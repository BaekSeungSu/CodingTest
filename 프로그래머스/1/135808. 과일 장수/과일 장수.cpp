#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(int k, int m, vector<int> score) {
    int answer = 0;
    int N = score.size();
    
    sort(score.begin(), score.end(), greater<int>());
    
    for (int i = m - 1; i < N; i += m) {
        answer += score[i] * m;
    }
    
    
    return answer;
}