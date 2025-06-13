#include <string>
#include <vector>

using namespace std;


int count_divisor(int n)
{
    if(n <=0) return 0;
    
    int count = 0;
    
    for(int i = 1; i*i <=n;i++)
    {
        if(n % i == 0)
        {
            if(i*i == n) count++;
            else count+=2;
        }
    }
    return count;   
}

int solution(int number, int limit, int power) {
    int answer = 0;
    
    for(int i=1; i<=number; i++)
    {
        int count = count_divisor(i);
        if(count > limit) answer+=power;
        else answer+= count;
    }
    
    
    return answer;
}