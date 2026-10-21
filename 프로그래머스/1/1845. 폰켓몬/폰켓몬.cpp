#include <vector>
#include <unordered_map>
using namespace std;

int solution(vector<int> nums)
{
    int answer = 0;
    unordered_map<int, int> umap;
    
    for(int i : nums)
    {
        ++umap[i];
    }
    if(nums.size()/2 < umap.size())
    {
        answer = nums.size()/2;
    }
    else
    {
        answer = umap.size();
    }
    
    
    return answer;
}