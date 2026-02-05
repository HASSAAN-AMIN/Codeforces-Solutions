/* 
                بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ   
    In the name of Allah, the Most Gracious, the Most Merciful.
*/
#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        long long n ;
        int k;
        cin >> n >> k;

        // all 1s 
        // (k -1 ) 1s , sand then n - k +1 
        if( (n-k+1)>0 && (n-k+1)%2 == 1  ){
            cout << "YES" << '\n' ;
            for (int i = 0; i < k-1; i++) {
                cout << "1 ";
            }
            cout << n-k+1 << '\n' ;
        }
        // ( k- 1) 2's and then n - 2k +2
        else if( (n-2*k+2)>0 && (n-2*k+2)%2 == 0  ){
            cout << "YES" << '\n' ;
            for (int i = 0; i < k-1; i++) {
                cout << "2 ";
            }
            cout << n-2*k+2 << '\n' ;
        }else{
            cout << "NO\n" ;
        }
        
    }

    return 0;
}