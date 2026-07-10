/* 
                بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ   
    In the name of Allah, the Most Gracious, the Most Merciful.
*/
#include <iostream>
#include<vector>
#include<algorithm>
#include <climits>




using namespace std;

long long foo(long long i, int n , int k ) {
    long long pre = i * 1LL * k + i * (i - 1) / 2;
    long long suf = (n - i) * 1LL * k + 1LL * n * (n - 1) / 2 - i * (i - 1) / 2;

    return pre - suf;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        
        
        int n ,  k ; 
        cin >> n >> k ; 


        // pre [i] =  k + k+1  + k+2  ... k+i-1
        //         = i*k +  (  1 + 2 + 3 ...  i-1)
        //         = i*k +  (i)*(i-1)/2  
        // suf[i] =  k+i  + k+i+1  + k+i+2 ... k+n-1
        //        =  (n-i)*k + (n)(n-1)/2 -(i)(i-1)/2


        long long pre , suf ;

            // for (long long i = 1; i <= n; i++) {
            //     pre = (i*k) + (i*i-i)/2ll ;   
            //     suf = (n-i)*k  + ( n*n-n)/2ll - (i*i-i)/2ll ;
            //     ans = min( ans , abs( pre-suf) ) ;    
            // }
        long long l = 1, r = n;

        while (l != r) {
            long long mid = l + (r-l)/2 ;

            if (foo(mid  , n , k ) >= 0  )
                r = mid;
            else
                l = mid + 1;
        }

        long long ans = abs(foo(l, n, k));

        if (l > 1)
            ans = min(ans, abs(foo(l - 1, n, k)));

        cout << ans << '\n';
        
    }

    return 0;
}