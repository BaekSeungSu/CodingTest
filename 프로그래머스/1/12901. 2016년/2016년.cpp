#include <string>
#include <vector>

using namespace std;

string solution(int a, int b) {
    string answer = "";
    int total_day = 0;
    vector<int> Month = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    vector<string> Day = {"THU", "FRI", "SAT", "SUN", "MON", "TUE", "WED"};
    
    for(int i = 0; i<a - 1; i++)
    {
        total_day += Month[i];
    }
    total_day += b;
    
    answer = Day[total_day%7];
    
    
    return answer;
}