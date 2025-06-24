#include <string>
#include <vector>

using namespace std;

int solution(int a, int b, int c) {
    long long answer = 0;
    long long x = a + b + c, y =  a*a + b*b + c*c, z = a*a*a + b*b*b + c*c*c;
    
    if(a == b && b == c)
    {
        answer = x * y * z;
    }
    else if(a == b && b != c)
    {
        answer = x * y;
    }
    else if(a != b && b == c)
    {
        answer = x* y;
    }
    else if( a == c && a != b)
    {
        answer = x * y;
    }
    else
    {
        answer = x;
    }
    
    return answer;
}