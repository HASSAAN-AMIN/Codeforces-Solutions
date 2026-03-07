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

    string s ;
    cin >> s ;
    int n = s.size() ;
    int x =  -1 , y = -1 ;
    for (int i = 0; i < n-1; i++) {
        if(s[i] == 'A' && s[i+1] == 'B'){
            x= i ;
            break;
        }
    }
    for (int i = n-1; i > 0; i--) {
        if(s[i] == 'A' && s[i-1] == 'B'){
            y= i ;
            break;
        }
    }
    // ABAXXXAB
    if( x == -1 || y == -1 || x == y || x+1 == y-1){
        for (int i = n-1; i > 0; i--) {
            if(s[i] == 'B' && s[i-1] == 'A'){
                x = i-1 ;
                break;
            }
        }
        if( x == -1 || y == -1 || x == y || x+1 == y-1){
            for (int i = 0; i < n-1; i++) {
                if(s[i] == 'B' && s[i+1] == 'A'){
                    y = i+1 ;
                    break;
                }
            }
            if( x == -1 || y == -1 || x == y || x+1 == y-1){
                cout << "NO\n";
                return 0 ;
            }
        }
    }
    cout << "YES\n" ; 
    return 0;
}