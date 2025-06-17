#include <string>
#include <vector>

using namespace std;

int solution(vector<int> ingredient) {
    int answer = 0;
    vector<int> A;
    for(int i=0; i<ingredient.size(); i++)
    {
        A.push_back(ingredient[i]);
        if (A.size() >= 4) {
            int n = A.size();
            if (A[n - 4] == 1 && A[n - 3] == 2 && A[n - 2] == 3 && A[n - 1] == 1) 
            {
                A.pop_back();
                A.pop_back();
                A.pop_back();
                A.pop_back();
                answer++;
            }
        }
    }
    return answer;
}