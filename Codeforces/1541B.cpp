/* 
                بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ   
    In the name of Allah, the Most Gracious, the Most Merciful.
*/
#include <iostream>
#include<vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        
        vector<int> arr(n + 1);
        vector<int> pos(2 * n + 1, -1);

        for (int i = 1; i <= n; i++) {
            cin >> arr[i];
            pos[arr[i]] = i;
        }

        long long cnt = 0;

        for (int i = 1; i <= n; i++) {
            for (int k = 1; k * arr[i] <= 2 * n; k++) {
                int j = k * arr[i] - i;
                if (j > i && j <= n) {
                    if (pos[k] == j)
                        cnt++;
                }
            }
        }

        cout << cnt << '\n'  ;
    }

    return 0;
}