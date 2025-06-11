#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    vector<int> A = {1, 2, 3, 4, 5};
    vector<int> B = {2, 1, 2, 3, 2, 4, 2, 5};
    vector<int> C = {3, 3, 1, 1 ,2 ,2 ,4, 4, 5, 5};
    int scoreA = 0, scoreB = 0, scoreC = 0;
    for(int i=0; i<answers.size(); i++)
    {
        if(answers[i] == A[i%5]) scoreA++;
        if(answers[i] == B[i%8]) scoreB++;
        if(answers[i] == C[i%10]) scoreC++;
    }
    
    int max_val = max({scoreA, scoreB, scoreC});
    
    if(max_val == scoreA) answer.push_back(1);
    if(max_val == scoreB) answer.push_back(2);
    if(max_val == scoreC) answer.push_back(3);
    
        
    return answer;
}