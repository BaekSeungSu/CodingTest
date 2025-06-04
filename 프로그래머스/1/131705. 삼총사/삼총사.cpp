#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> number) {
    int answer = 0;
    int len = number.size();
    sort(number.begin(), number.end());
    vector<bool> comb(len, false);
    fill(comb.end()-3, comb.end(), true);
    do
    {
        int sum = 0;
        for(int i=0; i<len; i++)
        {
            if(comb[i]) sum+=number[i];
        }
        if(sum==0) answer++;
    }while(next_permutation(comb.begin(), comb.end()));
    
    
    return answer;
}