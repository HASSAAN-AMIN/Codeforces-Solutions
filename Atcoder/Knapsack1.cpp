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

    int n  , w ;
    cin >> n >> w ;

    vector<int> wei(n + 1);
    vector<int> arr(n +  1);

    // vector <vector<long long>> dp( n + 1  , vector<long long>(w+1)) ;
    
    for (int i = 1; i <= n; i++) {
        cin >> wei[i] >> arr[i] ;
    }
    // for (int i = 0; i <= w; i++) {
    //     dp[0][i] = 0 ;
    // }
    // for (int i = 1; i <= n; i++) {
    //     for (int j = 0; j <= w; j++) {
    //         if(wei[i] <= j)
    //             dp[i][j] = max( dp[i-1][j] , dp[i-1][j-wei[i]] + arr[i]);
    //         else
    //             dp[i][j] = dp[i-1][j] ;
    //     }
    // }
    // cout << dp[n][w] << '\n'; 

    vector<long long> dp( w  +1 );

    dp[0] = 0;    
    for (int i = 1; i <= n; i++) {
        for (int j = w; j >= wei[i]; j--) {
            dp[j] = max( dp[j] , dp[j-wei[i]] + arr[i]);
        }
    }
    cout << dp[w] << '\n';


    return 0;
}