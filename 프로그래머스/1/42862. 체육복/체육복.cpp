#include <string>
#include <vector>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = 0;
    vector<int> result(n + 2, 1);
    for(int i : lost)
    {
        result[i]--;
    }
    for(int i : reserve)
    {
        result[i]++;
    }
    
    for(int i= 1; i<=n; i++)
    {
        if(result[i] == 0)
        {
            if(result[i - 1] == 2) {
                result[i - 1]--;
                result[i]++;
            }
            else if(result[i + 1] == 2) {
                result[i + 1]--;
                result[i]++;
            }
        }
    }
   
    for(int i=1; i<=n; i++)
    {
        if(result[i] >=1) answer++;
    }
    
    
    return answer;
}