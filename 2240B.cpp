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


    long long mod = 998244353;
    
    int t;
    cin >> t;
    while(t--){
        
        long long n  , m, r ,c ;
        cin   >> n >> m >> r >> c ;

        // even 1s


        long long x =  r*m*1ll + n*c*1ll - r*c*1ll - m- n + r + c- 1ll ;

        // exponentiation
        long long ans = 1;
        long long b = 2;
        while (x > 0) {
            if (x & 1) {
                ans = ans * b % mod;
            }
            b = b * b % mod;
            x >>= 1;
        }

        cout << ans << '\n';
    
    }

    return 0;
}