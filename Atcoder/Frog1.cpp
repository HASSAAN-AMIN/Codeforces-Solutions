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

    int n;
    cin >>n ;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i] ;
    }

    vector<int> dp(n , 0);
    dp[0] = 0 ;
    dp[1] = abs(arr[1]- arr[0]);

    for (int i = 2; i < n; i++) {
        dp[i] = min( dp[i-1] + abs(arr[i]- arr[i-1]) , dp[i-2] + abs(arr[i]- arr[i-2])  );
    }

    cout << dp[n-1] << '\n' ;

    return 0;
}