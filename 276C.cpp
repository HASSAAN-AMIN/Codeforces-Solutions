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

    int n , q; 
    cin >>n >> q ;

    vector<int> arr(n+1 );
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }

    vector<long long> brr(n+2  , 0 );

    int l , r;
    while(q--){
        cin >> l >> r; 
        brr[l]++;
        brr[r+1]--;
    }
    for (int i = 1; i < n+2; i++) {
        brr[i] += brr[i-1];
    }


    sort( brr.rbegin() , brr.rend() );
    sort( arr.rbegin() , arr.rend() ) ;

    int i = 0 ;

    long long ans = 0 ;
    while( brr[i] != 0 ){
        ans += brr[i]*arr[i] ;
        i++; 
    }
    cout << ans << '\n' ; 


    return 0;
} 