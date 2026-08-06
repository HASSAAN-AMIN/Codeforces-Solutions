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
        int n, q ;
        cin >> n >> q ;

        string s ;
        cin >> s ;
        

        vector<int> pref(n , 0);
        for (int i = 1; i < n; i++) {
            pref[i] = pref[i - 1] ;
            if(s[i - 1] == s[i])
                pref[i]++; 
            
        }

        while (q--) {
            int l, r, k;
            cin >> l >> r >> k;

            if( (pref[r-1]-pref[l-1]+1)/2 <= k   )
                cout << "YES" << '\n' ;
            else    
                cout << "NO" << '\n' ;
                
        }

        
    }

    return 0;
} 