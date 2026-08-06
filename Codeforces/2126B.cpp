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
        int n , k;
        cin >> n >> k ;
        vector<int> arr(n) ;

        int cnt = 0 ; 
        int ans = 0 ;
        for (int i = 0; i < n; i++) {
            cin >> arr[i] ;
            if( arr[i] == 1 ){
                ans += (cnt + 1 )/( k + 1) ;
                cnt = 0 ;
                continue;
            }
            cnt++;
        }
        ans+=(cnt + 1)/(k + 1);

        cout << ans << '\n' ;
    }

    return 0;
}