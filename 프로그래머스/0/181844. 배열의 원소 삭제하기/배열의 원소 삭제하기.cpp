#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<int> delete_list) {
    vector<int> answer;
    
    for(int i : arr)
    {
        bool isDel = false;
        for(int j : delete_list)
        {
            if(i == j)
            {
                isDel = true;
                break;
            }
        }
        if(isDel) continue;
        answer.push_back(i);
        
    }
    
    return answer;
}