/* 
                بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ   
    In the name of Allah, the Most Gracious, the Most Merciful.
*/
#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;

const int mod = 676767677 ;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n) ;

        long long ans = 0 ;
        for (int i = 0; i < n; i++) {
            cin >> arr[i] ;
            if(arr[i] != 1){
                ans += (arr[i]%mod) ;
            }
        }
        if(arr[arr.size()-1] == 1)
            ans += 1 ;
        ans = ans%mod ;
        cout << ans << '\n' ;

    }

    return 0;
} 