/* 
                بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ   
    In the name of Allah, the Most Gracious, the Most Merciful.
*/
#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // int t;
    // cin >> t;
    // while(t--){
        int n;
        cin >> n;

        int cnt = 0;

        while (n > 0) {
            int sus = n;
            int mx = 0;
            while (sus > 0) {
                mx = max(mx, sus % 10);
                sus /= 10;
            }
            n -= mx;
            cnt++;
        }
        cout << cnt << '\n' ;
    //}

    return 0;
}