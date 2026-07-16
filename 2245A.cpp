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
        int n , k ;
        cin >> n >> k ;

        string s ;
        cin >> s ;

        int cnt = 0;

        for (int i = 0; i < k; i++) {
            if( s [i]  == 'L')  
                cnt++;
        }
        for (int j = n-k; j < n; j++) {
            if( s[j] == 'R')
                cnt++;
            
        }
        if( 2*k >  n)    
            cout << -1 << '\n' ;
        else
            cout << cnt << '\n'; 
    }

    return 0;
} 