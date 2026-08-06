/* 
                بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ   
    In the name of Allah, the Most Gracious, the Most Merciful.
*/

#include <iostream>
#include<vector>
#include<algorithm>
#include <cstring>

using namespace std; 

const int MOD = 998244353;
const int MAXN = 1000005;

int vis[MAXN];
int arr[MAXN];
bool pre[MAXN], suf[MAXN];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {

        int n;
        cin >> n;

        for (int i = 1; i < n; i++)
            cin >> arr[i];

        arr[n] = 0;

        bool ok = true;
        for (int i = 1; i < n; i++) {
            if (arr[i] == n) {
                ok = false;
                break;
            }
        }

        if (!ok) {
            cout << 0 << '\n';
            continue;
        }

        pre[0] = true;
        for (int i = 1; i < n; i++)
            pre[i] = pre[i - 1] && (arr[i] >= arr[i - 1]);

        suf[n] = true;
        for (int i = n - 1; i >= 1; i--)
            suf[i] = suf[i + 1] && (arr[i] >= arr[i + 1]);

        long long ans = 0;

        for (int cut = 0; cut < n; cut++) {

            if (!pre[cut] || !suf[cut + 1])
                continue;

            vector<int> l, r;

            for (int i = 1; i <= cut; i++)
                l.push_back(arr[i]);

            for (int i = cut + 1; i < n; i++)
                r.push_back(arr[i]);

            if (!l.empty() && !r.empty() && l.back() == r.front())
                continue;

            reverse(r.begin(), r.end());

            memset(vis, 0, sizeof(int) * (n + 1));

            int i = 0, j = 0;
            int used = 0;
            long long cnt = 1;

            while (i < (int)l.size() || j < (int)r.size()) {

                int cur;

                if (i == (int)l.size())
                    cur = r[j++];
                else if (j == (int)r.size())
                    cur = l[i++];
                else if (l[i] < r[j])
                    cur = l[i++];
                else if (l[i] > r[j])
                    cur = r[j++];
                else {
                    cout << 0 << '\n';
                    goto nxt;
                }

                if (!vis[cur]) {
                    vis[cur] = 1;
                }
                else {
                    if (cur < used)
                        cnt = 0;
                    else
                        cnt = cnt * (cur - used) % MOD;
                }

                used++;
            }

            ans = (ans + cnt) % MOD;
        }

        cout << ans % MOD << '\n';

        nxt:;
    }

    return 0;
}