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
        // this one seems pretty simple like ofc you get an inturation 
        // to just check that how many times its greater than prev max ;
        vector<int> arr (n) ;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        // n >= 2
        int curr = arr[0] ;
        int ans  = 1 ;

        for (int i =  1 ; i < n; i++) {
            if( arr[i] >= curr){
                curr = arr[i] ;
                ans++;
            }
        }
        cout << ans << '\n' ;
        
    }

    return 0;
}