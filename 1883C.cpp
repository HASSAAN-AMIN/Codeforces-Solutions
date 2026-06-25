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
        int n  ,k ;
        cin >> n >> k ;
        vector<int> arr(n) ;

        int ans = k + 1;

        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
            int cur = arr[i];
            cur += (k - cur % k) % k;
            ans = min(ans, -(arr[i] - cur));
        }
        if (k == 4) {
            int x = 10;
            k = 2;
            for (int i = 0; i < n; ++i) {
                int cur = arr[i];
                cur += (k - cur % k) % k;
                ans = min(ans, (cur - arr[i]) + x);
                x = min(x, (cur - arr[i]));
            }
        }
        cout << ans << '\n';
        
    }

    return 0;
}