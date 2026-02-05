/* 
                بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ   
    In the name of Allah, the Most Gracious, the Most Merciful.
*/
#include <iostream>
#include<algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        long long n , x ,y ;
        cin >> n >> x >> y ;

        long long l = n/x ;
        long long r = n/y ;

        long long lcm = (x*y)/ __gcd(x ,y);
        long long idk = lcm ;
        
        int cnt = n/lcm ;
        l -= cnt;
        r -= cnt;

        // while(idk <= n){
        //     l--;
        //     r--;
        //     idk += lcm;
        // }
        // long long sum = 0;
        // sum -= 
        // n + n-1 + n-2 + ... + n-l+1
        long long sum = l * (2*n - l + 1) / 2 - (r*r + r )/2 ;
        cout << sum << '\n' ;

        // long long ans = 0 ;
        
        // long long a =x ;
        // while(a <=  n){
        //     a += x;
        // }

        
    }

    return 0;
}