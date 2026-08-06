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
        cin >> n;
        
        vector<int> a(n) ;
        for (int i = 0; i < n; i++) {
            cin >> a[i] ;
        }

        sort(a.begin(), a.end());

        int l = 0, h = n, ans = 0;
        while (l <= h) {
            int m = l + (h - l) / 2;
            vector<bool> u(m, false);
            vector<int> r;

            for (int x : a) {
                if (x < m && !u[x]) {
                    u[x] = true;
                } else {
                    r.push_back(x);
                }
            }

            int p = 0;
            bool ok = true;
            for (int i = 0; i < m; i++) {
                if (!u[i]) {
                    while (p < (int)r.size() && r[p] < 2 * i + 1) {
                        p++;
                    }
                    if (p == (int)r.size()) {
                        ok = false;
                        break;
                    }
                    p++;
                }
            }

            if (ok) {
                ans = m;
                l = m + 1;
            } else {
                h = m - 1;
            }
        }

        cout << ans << '\n';
        
    }

    return 0;
}