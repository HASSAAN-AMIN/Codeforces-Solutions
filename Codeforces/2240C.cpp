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

    int mod = 998244353;

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        vector<int> a(n);
        int x = 0;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            x ^= a[i];          
        }
        if (x == 0) {
            cout << 1 << '\n';
        }
        else if (n == 1) {
            cout << 0 << '\n';
        }else{
            int c = __lg(x);                 

            long long ans = 0;
            for (int i : a) {
                if ((i >> c) & 1)   
                    ans++;
            }

            cout << ans % mod << '\n';
        }
        
    }

    return 0;
}