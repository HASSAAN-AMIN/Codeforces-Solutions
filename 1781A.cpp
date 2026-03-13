/* 
                بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ   
    In the name of Allah, the Most Gracious, the Most Merciful.
*/
#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int w  , d , h ;
        int a, b ,f   ,g;
        cin >> w >> d >> h ;
        cin >> a >> b>>  f >> g ;


        int ans = b + abs(a - f) + g;
        ans = min(ans, a + abs(b - g) + f);
        ans = min(ans, (d - b) + abs(a - f) + (d - g));
        ans = min(ans, (w - a) + abs(b - g) + (w - f));
        cout << ans + h << '\n';
        
    }

    return 0;
}