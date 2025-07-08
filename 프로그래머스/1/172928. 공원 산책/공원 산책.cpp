#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> park, vector<string> routes) {
    vector<int> answer;
    int startX;
    int startY;
        
    for(int i=0; i<park.size(); i++)
    {
        for(int j=0; j<park[i].size(); j++)
        {
            if(park[i][j] == 'S')
            {
                startX = i;
                startY = j;
            }
        }
    }
        
    for(int i=0; i<routes.size(); i++)
    {
        char type = routes[i][0];
        int move = routes[i][2] - '0';
        int canMove = true;
        if(type == 'E' && !(startY + move >= park[0].size()))
        {
            for(int j = 1; j <= move; j++)
            {
                if(park[startX][startY + j] == 'X')
                {
                    canMove = false;
                    break;
                }
            }
            if(canMove) startY += move;
        }
        else if(type == 'W' && !(startY - move < 0))
        {
            for(int j = 1; j <= move; j++)
            {
                if(park[startX][startY - j] == 'X')
                {
                    canMove = false;
                    break;
                }
            }
            if(canMove) startY -= move;
        }
        else if(type == 'S' && !(startX + move >= park.size()))
        {
            for(int j = 1; j <= move; j++)
            {
                if(park[startX + j][startY] == 'X')
                {
                    canMove = false;
                    break;
                }
            }
            if(canMove) startX += move;
        }
        else if(type == 'N' && !(startX - move < 0))
        {
            for(int j = 1; j <= move; j++)
            {
                if(park[startX - j][startY] == 'X')
                {
                    canMove = false;
                    break;
                }
            }
            if(canMove) startX -= move;
        }
        
    }
    
    answer.push_back(startX);
    answer.push_back(startY);
    
    return answer;
}