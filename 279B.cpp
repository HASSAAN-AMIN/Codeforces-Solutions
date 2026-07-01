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

    int n , t;
    cin >> n >> t;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int l = 0;
    long long sum = 0;
    int ans = 0;

    for (int r = 0; r < n; r++) {
        sum += arr[r];

        while (sum > t) {
            sum -= arr[l];
            l++;
        }

        ans = max(ans, r - l + 1);
    }




    cout << ans << '\n';

    return 0;
} 