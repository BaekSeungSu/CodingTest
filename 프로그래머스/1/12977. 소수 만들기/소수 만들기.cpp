#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int isPrime(int val)
{
    if(val <= 1) return 0;
    
    for(int i=2; i<val; i++)
    {
        if(val%i == 0) return 0;
    }
    return 1;
}


int solution(vector<int> nums) {
    int answer = 0;
    vector<int> tmp(nums.size(),0);
    fill(tmp.end()-3, tmp.end(), 1);
    
    do{
        int sum = 0;
        for(int i=0; i<nums.size(); i++){
            if(tmp[i] == 1) sum+= nums[i];
        }
        answer += isPrime(sum);
    }while(next_permutation(tmp.begin(), tmp.end()));
    

    return answer;
}