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

        vector<int> arr(n +1 );

        for (int i = 1; i <= n; i++) {
            cin >> arr[i];
        }

        for (int i = n/2 - 1; i >= 1; i--) {
            if (arr[i] == arr[i + 1] || arr[n - i + 1] == arr[n - i]) {
                swap(arr[i], arr[n - i + 1]);
            }
        }

        int ans = 0;
        for (int i = 1; i < n; i++) {
            if (arr[i] == arr[i + 1])
                ans++;
        }

        cout << ans << '\n';
    }

    return 0;
}