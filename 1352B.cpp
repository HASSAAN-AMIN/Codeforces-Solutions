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
        int n ;
        int k;
        cin >> n >> k;

        if( (n-k+1)>0 && (n-k+1)%2 == 1  ){
            cout << "YES" << '\n' ;
            for (int i = 0; i < k-1; i++) {
                cout << "1 ";
            }
            cout << n-k+1 << '\n' ;
        }
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