/* 
                بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ   
    In the name of Allah, the Most Gracious, the Most Merciful.
*/
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n ;
    int k ;
    cin >> n >> k ;


    if( k == 0 || k ==n){
        cout << 0 << ' ' << 0  ;
        return 0 ;
    }
    else    
        cout << 1 ;
    cout << ' ' ;

    cout << min(  n-k , 2ll*k)  ; 

    return 0;
}