#include <string>
#include <vector>

using namespace std;

int solution(int n, int m, vector<int> section) {
    int answer = 0;
    int start = 0;
    
    for(int i : section)
    {
        if(i > start) 
        {
            answer++;
            start = i + m - 1;
        }
    }
    

    return answer;
}