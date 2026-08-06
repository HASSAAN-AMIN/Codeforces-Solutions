/* 
                بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ   
    In the name of Allah, the Most Gracious, the Most Merciful.
*/
#include <iostream>
#include<vector>
#include<algorithm>
#include<map>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        map<int , int , greater<int>> arr ;

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x ;
            arr[x]++;
        }


        int ans = 0;

        int l = 0;
        int maxy = 0;
        int total = 0;

        for (auto u : arr) {

            total += u.first * u.second;
            if (u.second > l) {
                l = u.second;
                maxy = u.first;
            }
        }

        int k = n - l;

        if (l <= k + 1) {
            ans = total;
        } else {
            ans = total - (l * maxy) + (k + 2) * maxy;
        }

        cout << ans << '\n';

        
    }

    return 0;
}