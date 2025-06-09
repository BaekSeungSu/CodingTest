#include <string>
#include <vector>

using namespace std;

string solution(vector<int> food) {
    string answer = "";
    
    
    for(int i= 1; i<food.size(); i++)
    {
        answer.insert(answer.size()/2, food[i]/2 * 2, char(i) + '0');
    }
    
    answer.insert(answer.size()/2, "0");
    
    return answer;
}
