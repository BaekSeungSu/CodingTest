#include <string>
#include <vector>

using namespace std;
int answer = 0;
void target_number(vector<int> numbers, int target, int sum, int index) {
    if (index == numbers.size()) {
        if (sum == target) {
            answer++;
        }
        return;
    }
    target_number(numbers, target, sum + numbers[index], index + 1);
    target_number(numbers, target, sum - numbers[index], index + 1);
}

int solution(vector<int> numbers, int target) {
    target_number(numbers, target, 0, 0);
    return answer;
}