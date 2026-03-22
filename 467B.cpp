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

    // int t;
    // cin >> t;
    // while(t--){
    //     int n;
    //     cin >> n;
        
    // }
    int n , m , k ;
    cin >> n >> m >> k ;
    vector<int> arr(m+ 1);
    for (int i = 0; i < m +1 ; i++) {
        cin >> arr[i] ;
    }
    int ans = 0;

    for (int i = 0; i < m; i++) {
        if (__builtin_popcount(arr[m] ^ arr[i]) <= k) {
            ans++;
        }
    }    cout << ans << '\n' ;
    return 0;
}