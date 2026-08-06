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

        vector<int> arr(n);

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        string s;
        cin >> s;

        int z = 0, o = 0;

        vector<int> pre(n + 1);

        for (int i = 1; i <= n; i++) {

            pre[i] = pre[i - 1] ^ arr[i - 1];

            if (s[i - 1] == '0')
                z ^= arr[i - 1];
            else
                o ^= arr[i - 1];
        }

        int q;
        cin >> q;

        while (q--) {

            int c;
            cin >> c;

            if (c == 1) {

                int l, r;
                cin >> l >> r;

                int a = pre[r] ^ pre[l - 1];

                z ^= a;
                o ^= a;

            } else {

                int x;
                cin >> x;

                cout << (x == 0 ? z : o) << ' ';
            }
        }

        cout << '\n';
    }

    return 0;
}