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

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        string s ;
        cin >> s ;

        int ans = 0 ;
        for (int i = 0; i < n; i++) {
            int cnt  = 0 ;
            while( i < n &&  s[i] == '#'){
                cnt++;
                i++;
            }
            ans = max( ans , cnt) ;
        }

        cout << (ans+1 )/2 << '\n' ;

        
    }

    return 0;
} 