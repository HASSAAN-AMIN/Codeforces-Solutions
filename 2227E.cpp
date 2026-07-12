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
        vector<int> arr(n) ;
        vector<int> brr(n) ;

        for (int i = 0; i < n; i++) {
            cin >> arr[i] ;
        }
        brr[n-1] = arr[n-1] ;
        for (int i = n-2 ; i >= 0 ; i--) {
            brr[i] = min(brr[i+1]  , arr[i] ) ;
        }
        long long  ans = 0 ;
        int maxy = 0 ;
        vector<int> freq(n+1 , 0) ;

        for (int i = 0; i < n; i++) {
            ans += arr[i] - brr[i] ;
            freq[brr[i]]++ ;
            maxy =max( maxy  , freq[brr[i]]) ;
        }
        ans +=  (maxy > 0)? maxy-1 : 0  ;
        cout << ans << '\n' ;
    }

    return 0;
} 