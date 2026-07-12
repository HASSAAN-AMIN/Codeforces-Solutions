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

    long long x;
    cin >> x;

    long long ans = 1;
    for (long long i = 1; i*i < x; i++) {
    
        if( x % i == 0 &&  (__gcd( i ,x/i) == 1))
            ans = i ;
        
    }

    cout << ans << ' ' << x/ans <<'\n'  ;



    return 0;
}