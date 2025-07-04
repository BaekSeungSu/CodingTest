#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer;
    
    for(int i=0; i<queries.size(); i++)
    {
        int s = queries[i][0];
        int e = queries[i][1];
        int k = queries[i][2];
        vector<int> num;
        
        for(int j = s; j<=e; j++)
        {
            if(arr[j] > k)
            {
                num.push_back(arr[j]);
            }
        }
        if(num.empty()) answer.push_back(-1);
        else
        {
            int min = *min_element(num.begin(), num.end());
            answer.push_back(min);
        }
    }
    
    return answer;
}