using namespace std;

long long solution(int price, int money, int count)
{
    long long answer=0;

    long long total_price = 0;

    for (int i = 1; i <= count; i++) {
        total_price += i * price;
    }

    if (total_price - money < 0)
        return 0;

    answer = total_price-money;

    return answer;
}