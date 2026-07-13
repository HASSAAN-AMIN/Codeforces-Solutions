/* 
                بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ   
    In the name of Allah, the Most Gracious, the Most Merciful.
*/
#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;

const int mod = 1e9 + 7; 
long long exp(int x ){

    long long res = 1;
    
    long long base = 2;
    
    while (x > 0) {
        if (x & 1)  
            res = (res * base) % mod;

        base = (base * base) % mod;
        
        x >>= 1;
    }
    return res;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        vector<int> arr(n);

        int k = 0 ;

        int prev = -1 ; 
        int dis = 0; 

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            if( arr[i] == -1 )
                k++ ;
            else if( arr[i] != prev ){
                dis++;
                prev = arr[i];
            }
        }


        if( k == 0 ){
            // sum of  2( size of grp -1 ) for all grps
            // simp to  ->  2^(  n - dist)
            // cnt distinct

            //cout << dis << '\n'; 
            // -> works

            cout << exp( n-  dis) << '\n' ; 
        }else{
            int l = 0 ;
            for (int i = 0; i < n -1 ; i++) {
                if( arr[i] == arr[i+1]-1)
                    l++ ;
            }
            //cout << (exp( n-  dis)*(l+1ll)  )% mod << '\n' ;
            cout << (exp(n - dis - 1) * (l + 1LL)) % mod << '\n' ;
        }

        
    }

    return 0;
}