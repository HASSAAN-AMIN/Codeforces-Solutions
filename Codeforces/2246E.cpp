/* 
                بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ   
    In the name of Allah, the Most Gracious, the Most Merciful.
*/
#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {

    // ios::sync_with_stdio(false);
    // cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){

        long long o, p;


        cout << 357913941 << '\n';
        cin >> o;

        long long ans = (o == 357913941) ? 305419896 : ((o & 715827882) == 0 ? 357913941: 715827882);

        cout << "0 " << ans << '\n';
        cin >> p;

        if (o == 357913941) {
            cout << (((((p ^ ans) & 357913941) == 357913941) ||(((p ^ ans) & 715827882) == 0)) &&!(((p & 357913941) == 357913941) ||((p & 715827882) == 0))) << '\n';
        }
        else {
            cout << ((p & ans) != (o & ans)) << '\n';
        }

        
    }

    return 0;
}