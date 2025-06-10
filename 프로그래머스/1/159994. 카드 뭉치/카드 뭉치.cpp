#include <string>
#include <vector>

using namespace std;

string solution(vector<string> cards1, vector<string> cards2, vector<string> goal) {
    string answer = "";
    int count1 = 0;
    int count2 = 0;
    bool isCan = true;
    for(int i=0; i<goal.size(); i++)
    {
        if(count1 < cards1.size() && goal[i] == cards1[count1])
        {
            count1++;
        }
        else if(count2 < cards2.size() && goal[i] == cards2[count2])
        {
            count2++;
        }
        else isCan = false;
    }
    

    
    return isCan ? "Yes" : "No";
}