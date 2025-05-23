// 백준 5430 : AC

#include<bits/stdc++.h>
#include<sstream>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;
    cin >> T;

    while (T--) 
    { 
        string p_str, arr_str, token;
        int n;
        cin >> p_str >> n >> arr_str;

        deque<int> d;
        if (n > 0) 
        {
            arr_str.erase(arr_str.begin()); 
            arr_str.pop_back();             

            stringstream ss(arr_str);
            char delimiter = ',';
            while (getline(ss, token, delimiter)) 
            {
                if (!token.empty()) 
                {
                    d.push_back(stoi(token));
                }
            }
        }

        bool isReversed = false;
        bool isError = false;

        for (char command : p_str) {
            if (command == 'R') {
                isReversed = !isReversed;
            }
            else {
                if (!d.empty()) {
                    if (isReversed) {
                        d.pop_back();
                    }
                    else {
                        d.pop_front();
                    }
                }
                else {
                    isError = true;
                    break;
                }
            }
        }

        if (isError) {
            cout << "error\n";
        }
        else {
            cout << "[";
            if (!d.empty()) {
                if (isReversed) { // 최종적으로 뒤집어야 하면 한 번만 뒤집기
                    reverse(d.begin(), d.end());
                }
                for (size_t i = 0; i < d.size(); ++i) {
                    cout << d[i];
                    if (i < d.size() - 1) {
                        cout << ",";
                    }
                }
            }
            cout << "]\n";
        }
    }
    return 0;
}
