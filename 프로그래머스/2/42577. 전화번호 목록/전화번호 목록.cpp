#include <string>
#include <vector>
#include <unordered_set>
using namespace std;

bool solution(vector<string> phone_book) {
    unordered_set<string> book;
    book.reserve(phone_book.size());
    for(const auto& num : phone_book)
    {
        book.insert(num);
    }
    
    for(const auto& num : phone_book)
    {
        for(int len = 1; len < num.size(); len++)
        {
            if(book.count(num.substr(0, len)))
            {
                return false;
            }
        }
    }
    
    return true;
}