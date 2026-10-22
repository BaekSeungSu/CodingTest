#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

int solution(vector<int> nums)
{
    unordered_map<int, int> umap;
    
    for(int i : nums)
    {
        ++umap[i];
    }
    
    return min(nums.size()/2, umap.size());
}