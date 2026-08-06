/* 
                بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ   
    In the name of Allah, the Most Gracious, the Most Merciful.
*/
#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n;
        string s;
        cin >> n >> s;

        int z = 0, o = 0;

        for (char c : s) {
            if (c == '0') 
                z++;
            else o++;
        }

        int zz = 0, oo = 0;
        
        if (s[0] == '0') 
            zz = 1;
        else 
            oo = 1;

        for (int i = 1; i < n; i++) {
            if (s[i] != s[i - 1]) {
                if (s[i] == '0') 
                    zz++;
                else 
                    oo++;
            }
        }
        
        bool sus = false;
        
        if (abs(z - o) > 2) {
            sus = true;
        }

        int ans = -1;

        if (!sus) {
            for (int i = -1; i <= 1; i++) { 
                if (abs(z - o - i) <= 1) {
                    int y = min(oo, zz - i); 
                    int x = y + i;
                    if (x >= 0 &&( (y) >= 0)) {
                        ans = max(ans, x + y);
                    }
                }
            }
        }
        
        if (ans == -1) {
            sus = true;
        }

        if (sus) {
            cout << -1 << '\n';
        } else {
            cout << n - ans << '\n';
        }
        
    }

    return 0;
}