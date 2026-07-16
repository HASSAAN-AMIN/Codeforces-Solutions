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
        int k;
        cin >> n >> k;

        int big = 1;
        while (big < n) 
            big <<= 1;

        int ans = 0 ;

        int req = k ^ n;

        vector<bool> sus(n, 0);

        for (int b = 0; b < 30 ; b++) {
            int val = 1LL << b;
            if (val < n && (req & val)) {
                sus[val] = true;
                ans = ans | val ;
            }
        }
        

        if( ans != req){
            cout << "NO" << '\n' ;
        }else{
            cout << "YES" << '\n' ;

            for (int i = 1; i < n; i++) 
                if (!sus[i]) 
                    cout << i << ' '; 
                    
            cout << 0 << ' ' ;
            
            for (int i = 1; i < n; i++) 
                if (sus[i]) 
                    cout << i << ' '; 

            cout << '\n' ;

        }
    }

    return 0;
}