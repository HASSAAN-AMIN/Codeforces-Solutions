/* 
                بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ   
    In the name of Allah, the Most Gracious, the Most Merciful.
*/
#include <iostream>

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
    long long n , cnt ;
    cin >> n;
    cnt = 0 ;

    for (long long i = 1; i*i<= n; i++) {
        if( n%i == 0){
                cnt++;

            if((i*i) == n) {   
                break;
            }
            cnt++;
        }   
        
    }
    cout << cnt << '\n' ;

    return 0;
}