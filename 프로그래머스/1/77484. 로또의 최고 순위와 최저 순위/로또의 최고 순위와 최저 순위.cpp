#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer;
    vector<int> rank = {6, 6, 5, 4, 3, 2, 1};
    int zero_count = 0;
    int count = 0;
    for(int i=0; i<lottos.size(); i++)
    {
        if(lottos[i] == 0)
        {
            zero_count++;
            continue;
        }
        if(find(win_nums.begin(), win_nums.end(), lottos[i]) != win_nums.end())
        {
            count++;
        }
    }
    
    int max_rank = count+zero_count;
    
    answer.push_back(rank[max_rank]);
    answer.push_back(rank[count]);
    
    
    
    return answer;
}