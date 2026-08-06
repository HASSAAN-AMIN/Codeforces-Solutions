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
        long long x ;
        cin >> x;
        vector<long long> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        sort( arr.begin() , arr.end()  , greater<int>()  ) ;

        int ans  = 0 ;
        int mem = 0 ;


        for (int i = 0; i < n; i++) {
            mem++;
            if( arr[i] * mem >= x ){
                ans++;
                mem = 0;
            }
        }

        cout << ans << '\n' ;

        
    }

    return 0;
}