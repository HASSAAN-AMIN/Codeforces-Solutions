/* 
                بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ   
    In the name of Allah, the Most Gracious, the Most Merciful.
*/
#include <iostream>

using namespace std;
int fun(long long x){
    int ans = 0;
    while( x > 0){
        ans += x%10;
        x /= 10;
    }
    return ans;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        int ans = 0 ;
        for (int i = n+1 ; i < n+101 ; i++) {
            if( i - fun(i) == n)
                ans++;
        }
        cout << ans << '\n';
    }

    return 0;
}