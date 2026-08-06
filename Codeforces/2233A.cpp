
/* 
                بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ   
    In the name of Allah, the Most Gracious, the Most Merciful.
*/
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n, x, y, z; 
        cin >> n >> x >> y >> z;

        int cnt = 0;
        int sum = 0;
        while(sum < n){
            sum += x + y; 
            cnt++;
        }
        
        int ans = z * x; 
        int bnt = z;
        
        if(ans >= n) {
            bnt = (n + x - 1) / x;
        } else {
            while(ans < n){
                ans += x + 10 * y; 
                bnt++;
            }
        }
        
        cout << min(cnt, bnt) << '\n'; 
    }

    return 0;
}