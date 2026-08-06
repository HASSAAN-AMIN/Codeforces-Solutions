/* 
                بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ   
    In the name of Allah, the Most Gracious, the Most Merciful.
*/
#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;


bool ask( int r , int k ){
    cout << "? " << "1 " <<   r << '\n';
    int x  ; 
    cin >> x ;
    return (r - x) <= k ;
}

int main() {
    // ios::sync_with_stdio(false);
    // cin.tie(nullptr);

    int n , k ;
    int t; 
    cin >> n >> t  >> k;

    k-- ;
    
    // vector<int> arr(n) ;
    // for (int i = 1; i <= n; i++) {
    //     arr[i-1] = ask( i , k ) ;
    // }
    // for (int i = 0; i < n; i++) {
    //     cout << arr[i] << ' ' ; 
    // }
    // cout << '\n' ;

    int l = 1 ; 
    int r = n ;

    while( l < r){

        int m = (l +r)/2 ;

        if( ask(m , k ) )
            l = m + 1 ;
        else
            r = m ;  

       // cout << "l : " << l << "  r: " << r << '\n' ;
    }

    cout  << "! " << r << '\n' ;





    return 0;
}