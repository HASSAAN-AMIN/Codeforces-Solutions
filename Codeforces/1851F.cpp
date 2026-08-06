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
        

        int n, k;
        cin >> n >> k;

        vector<pair<int, int>> arr(n);

        for (int i = 0; i < n; i++) {
            cin >> arr[i].first;
            arr[i].second = i + 1;
        }

        sort(arr.begin(), arr.end());

        int sol = -1;
        int ans = 0;
        int ii = 0;
        int jj = 0;

        for (int i = 0; i < n - 1; i++) {

            int a = arr[i].first;
            int b = arr[i + 1].first;

            int x = 0;

            for (int j = 0; j < k; j++) {
                if (((a >> j) & 1) == 0 && ((b >> j) & 1) == 0) {
                    x |= (1 << j);
                }
            }

            int cur = (a ^ x) & (b ^ x);

            if (cur > sol) {
                sol = cur;
                ans = x;
                ii = arr[i].second;
                jj = arr[i + 1].second;
            }
        }

        cout << ii << " " << jj << " " << ans << "\n";
    }

    return 0;
}