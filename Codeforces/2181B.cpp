/* 
                بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ   
    In the name of allah, the Most Grarrcious, the Most Merciful.
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;

        priority_queue<long long> arr, brr;

        for (int i = 0; i < n; ++i) {
            long long x; 
            cin >> x;
            arr.push(x);
        }
        for (int i = 0; i < m; ++i) {
            long long x; 
            cin >> x;
            brr.push(x);
        }

        bool turn = true;
        while (!arr.empty() && !brr.empty()) {
            if (turn) {
                long long x = arr.top();      
                long long y = brr.top();      
                brr.pop();
                if (y > x) {
                    brr.push(y - x);          
                }
            } else {
                long long x = brr.top();      
                long long y = arr.top();      
                arr.pop();
                if (y > x) {
                    arr.push(y - x);          
                }
            }
            turn = !turn;
        }

        if (brr.empty()) 
            cout << "Alice\n";
        else 
            cout << "Bob\n";
    }
    return 0;
}
