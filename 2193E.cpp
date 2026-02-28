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
        vector<int> dp (n + 1 , 1e9) ;
        vector<int> arr(n + 1) ;
        
        for (int i = 1; i < n +1; i++) {
            cin >> arr[i] ;
            dp[arr[i]] = 1;
        }
        for (int i = 1; i <=  n; i++) {
            for (int j = i; j <= n ; j += i) {
                dp[j] = min(dp[j] , dp[i] + dp[j/i]);
            }
        }

        for (int i = 1; i < n+1; i++) {
            if(dp[i] == 1e9)    
                cout << -1 << ' ' ;
            else
                cout << dp[i] << ' ';
        }
        cout << '\n' ;
        
    }

    return 0;
}