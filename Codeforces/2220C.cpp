/* 
                بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ   
    In the name of Allah, the Most Gracious, the Most Merciful.
*/
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int p , q ;
        cin >> p >> q ;

        int lim_n = sqrt( (p/2) + q ) ;

        bool sus = true; 

        for( int n = 1 ; n <= lim_n ; n++) {

            if( (p+2*q-n)%(1+2*n) == 0){
                int m = (p+2*q-n)/(1+2*n) ;
                if( abs(n - m) <= p){
                    sus = false;
                    cout << n << ' ' << m  ;
                    break;
                }
            }
        }
        if(sus)
            cout << -1 ;
        cout << '\n' ;
    }

    return 0;
}