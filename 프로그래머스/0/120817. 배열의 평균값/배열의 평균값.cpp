#include <string>
#include <vector>

using namespace std;

double solution(vector<int> numbers) {
    double answer = 0;
    double len = numbers.size();
    for (int i = 0; i < len; i++)
    {
        answer += numbers[i];
    }
    return answer/len;
}