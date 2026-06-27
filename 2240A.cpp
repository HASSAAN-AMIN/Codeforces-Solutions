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
        
        
        int n, k;
        cin >> n >> k;

        
        int ans = 0;

        for (int i = 1; i <= n;i <<= 1) {
            int cnt = n / i;
            
            if (cnt > k) 
                cnt = k;

            ans += cnt;
            n -= cnt * i;
        }

        cout << ans << '\n';

    }

    return 0;
}