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
        int n;
        cin >> n;
        vector<int> arr(n  +1 );
        for (int i = 1; i-1 < n; i++) {
            cin >> arr[i] ;
        }
        int ans = 0 ;
        for (int i = 1; i < n +1 ; i++) {
            int cnt = 0;
            int crnt = i;
            while (crnt != -1) {
                crnt = arr[crnt];
                cnt++;
            }
            ans = max( ans ,cnt);
        }
        cout << ans << '\n' ;
        
    //}

    return 0;
}