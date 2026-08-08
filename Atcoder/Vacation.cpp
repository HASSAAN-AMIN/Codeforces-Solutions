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
    cin >> n ;
    vector<vector<int>> arr( n ,vector<int>(3));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> arr[i][j];
        }
    }

    vector<vector<int>> dp( n  , vector<int>(3 , INT_MAX));

    dp[0][0] = arr[0][0] ;
    dp[0][1] = arr[0][1] ;
    dp[0][2] = arr[0][2] ;


    for (int i = 1; i < n; i++) {

        dp[i][0] = max( dp[i-1][1] , dp[i-1][2]) + arr[i][0];
        dp[i][1] = max( dp[i-1][0] , dp[i-1][2]) + arr[i][1];
        dp[i][2] = max( dp[i-1][1] , dp[i-1][0]) + arr[i][2];
    }

    cout << max( { dp[n-1][0] , dp[n-1][1] , dp[n-1][2] }) << '\n';

    return 0;
}