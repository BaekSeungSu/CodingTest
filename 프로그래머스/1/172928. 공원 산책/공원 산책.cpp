#include <string>
#include <vector>
#include <map>
using namespace std;

vector<int> solution(vector<string> park, vector<string> routes) {
    vector<int> answer;
    int X = park.size();
    int Y = park[0].size();
    int sx;
    int sy;

    for(int i=0; i<X; i++)
    {
        for(int j=0; j<Y; j++)
        {
            if(park[i][j] == 'S')
            {
                sx = i;
                sy = j;
                break;
            }
        }
    }
    
    map<char, pair<int, int>> m;
    m['E'] = {0, 1};
    m['W'] = {0, -1};
    m['S'] = {1, 0};
    m['N'] = {-1, 0};
    
    for(string s : routes)
    {
        char type = s[0];
        int n = s[2] - '0';
        
        int dx = m[type].first;
        int dy = m[type].second;
        
        int nx = sx;
        int ny = sy;
        bool canMove = true;
        
        for(int i=0; i<n; i++)
        {
            nx += dx;
            ny += dy;
            if(nx <0 || ny < 0 || nx >= X || ny >= Y || park[nx][ny] == 'X')
            {
                canMove = false;
                break;
            }
        }
        
        if(canMove)
        {
            sx = nx;
            sy = ny;
        }
    }
    
    answer.push_back(sx);
    answer.push_back(sy);

    return answer;
}