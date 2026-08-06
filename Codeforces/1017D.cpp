/* 
                بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ   
    In the name of Allah, the Most Gracious, the Most Merciful.
*/
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, q;
    cin >> n >> m >> q;

    vector<int> w(n);

    for (int i = 0; i < n; i++) {
        cin >> w[i];
    }

    int tot = 1 << n;

    vector<int> wei(tot);

    for (int i = 0; i < tot; i++) {
        for (int bit = 0; bit < n; bit++) {
            if (i & (1 << bit)) {
                wei[i] += w[bit];
            }
        }
    }


    vector<int> freq(tot);

    for (int i = 0; i < m; i++) {

        string s;
        cin >> s;

        int num = 0;

        for (int j = 0; j < n; j++) {
            if (s[j] == '1') {
                num |= (1 << j);
            }
        }

        freq[num]++;
    }

    int t_w = wei[tot - 1];

    vector<vector<int>> pre(tot, vector<int>(101));

    for (int i = 0; i < tot; i++) {
        for (int j = 0; j < tot; j++) {

            int diff = i ^ j;
            int wu = t_w - wei[diff];
            if (wu <= 100) {
                pre[i][wu] += freq[j];
            }
        }

        for (int k = 1; k <= 100; k++) {
            pre[i][k] += pre[i][k - 1];
        }
    }

    while (q--) {

        string t;
        int k;

        cin >> t >> k;

        int mask = 0;

        for (int i = 0; i < n; i++) {
            if (t[i] == '1') {
                mask |= (1 << i);
            }
        }

        cout << pre[mask][k] << '\n';
    }

    return 0;
}