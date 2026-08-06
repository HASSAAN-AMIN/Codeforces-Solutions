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


        vector<int> l(n);
        vector<int> r(n);
        vector<int> u(n);
        vector<int> v(n);

        for (int i = 0; i < n; i++) {
            cin >> l[i] >> r[i] >> u[i] >> v[i];
        }

        int ans = 0;

        for (int m = 1; m <= n; m++) {
            int cnt = 0;  
            for (int i = 0; i < n ; i++) {
                if (cnt >= m)   
                    break;
                if (((cnt + 1 < l[i]) || (cnt + 1 > r[i])) && ((m - cnt < u[i]) || (m - cnt > v[i]))){
                    cnt++;
                }
            }
            
            if (cnt == m) {
                ans = m;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}