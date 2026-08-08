/* 
                بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ   
    In the name of Allah, the Most Gracious, the Most Merciful.
*/
#include <iostream>
#include<vector>
#include<algorithm>
#include <climits>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >>n ;
    int k; 
    cin >> k ;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i] ;
    }

    vector<int> dp(n , INT_MAX);
    dp[0] = 0 ;

    for (int i = 1; i < n; i++) {
        for (int j = max(0 , i -k); j < i; j++) {
            dp[i] = min( dp[i] , dp[j] + abs(arr[i]- arr[j]));
        }
    }

    cout << dp[n-1] << '\n' ;

    return 0;
}