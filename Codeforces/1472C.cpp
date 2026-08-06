/* 
                بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ   
    In the name of Allah, the Most Gracious, the Most Merciful.
*/
#include <iostream>
#include<vector>


using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<long long>arr(n);
        vector<long long>dp(n);
        long long ans = 1e-9;
        for (int i = 0; i < n; i++) {
            cin >> arr[i] ;
            dp[i] = arr[i];
        }
        for (int i = 0; i < n; i++) {
            int j = i + arr[i];
            if (j < n) {
                dp[j] = max(dp[j], dp[i] + arr[j]);
            }
            ans = max(ans , dp[i]);
        }

        // for (int i = 0; i < n; i++) {
        //     cout << dp[i] << ' ';
        // }
        cout << ans ;
        cout << '\n';


        
    }

    return 0;
}