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
        int n ; cin >> n ;
        
        string s;
        cin >> s;

        int ans = 0 ;
        int i = 0 ;
        
        while(  i  < n){
            ans++;
            if( s[i] == 'L')
                break;
            i++ ;
        }
        cout << ans << '\n' ;

                
    }

    return 0;
}