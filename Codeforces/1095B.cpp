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
        vector<int> arr(n) ;
        for (int i = 0; i < n; i++) {
            cin >> arr[i] ;
        }
        
        int ans = 0 ;
        for (int i = 0; i < n -1 ; i++) {
            if( arr[i] % abs(arr[i] - arr[i+1]) == 0 ){ 
                // damn i am smart 
                ans++; 
            }
        }
        cout << ans << '\n' ;

    }

    return 0;
} 