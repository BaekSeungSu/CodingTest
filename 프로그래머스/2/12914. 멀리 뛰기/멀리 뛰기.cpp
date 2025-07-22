#include <string>
#include <vector>

using namespace std;


long long func(int k)
{
    long long arr[2001];
    
    arr[0] = 1;
    arr[1] = 1;
    
    for(int i=2; i<=k; i++)
    {
        arr[i] = (arr[i-1] + arr[i-2]) % 1234567;
    }
    
    return arr[k];
}

long long solution(int n) {
    return func(n);
}