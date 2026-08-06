/* 
                بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ   
    In the name of Allah, the Most Gracious, the Most Merciful.
*/
#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;

const int MOD = 998244353;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    
    vector<int> arr(n) ;

    for (int i = 0; i < n; i++) {
        cin >> arr[i] ;
    }

    long long ans = 0;

    for (int i = 0; i < 31; i++) {

        long long cnt[2] = {1, 0};
        long long sum[2] = {0, 0};

        int pref = 0;

        for (int j = 1; j <= n; j++) {

            pref ^= ((arr[j - 1] >> i) & 1);


            long long tot = cnt[pref ^ 1] * j - sum[pref ^ 1];

            tot %= MOD;
            if (tot < 0) 
                tot += MOD;

            ans = (ans + tot * (1ll << i)) % MOD;

            cnt[pref]++;
            sum[pref] += j;
        }
    }

    cout << ans << '\n';




    



    return 0;
}