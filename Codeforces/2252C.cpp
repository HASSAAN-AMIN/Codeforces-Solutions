/*
                بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ   
    In the name of Allah, the Most Gracious, the Most Merciful.
*/
#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<int> w(n);
        for (int i = 0; i < n; i++) 
            cin >> w[i];

        vector<map<int, int, greater<int>>> a(n);

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                int x;
                cin >> x;
                a[i][x]++;
            }
        }

        int ans = m;

        map<int, int, greater<int>> mp;

        for (int i = n - 1; i >= 0; i--) {
            for (auto &p : a[i])
                mp[p.first] += p.second;

            long long rem = w[i];
            long long cnt = 0;

            for (auto &p : mp) {
                long long temp = (rem + p.first - 1) / p.first;
                cnt += min(1ll*p.second, temp);
                rem -= min(1ll*p.second, temp) * p.first;
                if (rem <= 0) 
                    break;
            }
            if (rem <= 0) 
                ans = min(1ll*ans, cnt);
        }

        cout << ans << '\n';
    }

    return 0;
}