#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    int n = num_list.size() - 1;
    
    if(num_list[n] > num_list[n-1])
    {
        num_list.push_back(num_list[n] - num_list[n-1]);
    }
    else
    {
        num_list.push_back(num_list[n] * 2);
    }
 
    return num_list;
}