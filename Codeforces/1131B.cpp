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

    int n  ;
    cin >> n ;
    // vector<pair<int , int >  > arr(n); 
    
    // for (int i = 0; i < n; i++) {
    //     cin >> arr[i].first >> arr[i].second ;
    // }
    int x  = 0  ;
    int y = 0 ;
    int pishu = 1  ; 
    for (int i = 0; i < n; i++) {
        int a , b ; 
        cin >> a >> b ;

        pishu += max( 0  , (min(a , b ) - max( x , y) ) +1 );  

        if( x== y)
            pishu--; 
        x = a ;
        y = b; 
    } 
    cout << pishu << '\n' ;



    return 0;
}