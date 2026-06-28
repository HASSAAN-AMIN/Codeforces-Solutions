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


    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        long long ans = 0;

        for (int i = 1; i < n+1; i++) {
            ans += (1ll*n/i)*(1ll*n/i);
        }

        cout << ans << '\n';     

        
    }

    return 0;
}