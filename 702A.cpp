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

    // int t;
    // cin >> t;
    // while(t--){
    //     int n;
    //     cin >> n;
        
    // }
    int n ;
    cin >> n ;
    vector<int> arr(n) ;

    for (int i = 0; i < n; i++) {
        cin >> arr[i] ;
    }
    vector<int> dp(n , 1) ;
    //dp[0] = 1;
    for (int i = 1; i < n; i++) {
        if(arr[i] > arr[i-1])
            dp[i] = dp[i-1] + 1;
    }
    int maxy = 0;
    for (int i = 0; i < n; i++) {
        maxy = max( maxy , dp[i]) ;
    }
    cout << maxy << '\n' ;
    
    return 0;
}