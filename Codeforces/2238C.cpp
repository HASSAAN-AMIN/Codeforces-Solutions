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

        vector<vector<int>> arr(n + 1);

        for (int i = 2; i <= n; i++) {
            int p;
            cin >> p;
            arr[p].push_back(i);
        }

        vector<int> len(n + 1, 0);
        long long ans = n; 

        for (int v = n; v >= 1; v--) {
            int x = -1, y = -1;
            int cnt = 0;

            for (int c : arr[v]) {
                cnt++;
                int h = len[c];

                if (h > x) {
                    y = x;
                    x = h;
                } else if (h > y) {
                    y = h;
                }
            }

            if (cnt >= 2) {
                ans += y + 1;
            }

            if (cnt > 0) {
                len[v] = x + 1;
            } else {
                len[v] = 0;
            }
        }

        cout << ans << '\n';

        
    }

    return 0;
}