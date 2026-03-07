/* 
                بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ   
    In the name of Allah, the Most Gracious, the Most Merciful.
*/
#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n , m , a , b ;
        cin >> n >> m >> a >> b ;

        int r = min( a , n-a+1) ;
        int l = min( b , m-b+1) ;

        int ans  =( ceil(log2(l)) + ceil(log2(n)) ) ;
        ans = min( ans , (int)(ceil(log2(m)) + ceil(log2(r))));
        cout << 1+ ans << '\n' ;
    }

    return 0;
}