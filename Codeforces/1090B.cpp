/* 
                بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ   
    In the name of Allah, the Most Gracious, the Most Merciful.
*/
#include <iostream>
#include<vector>
#include<algorithm>
#include <climits>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        vector<int> arr(7)  ;
        int big = INT_MIN ; 
        int ans = 0 ;
        for (int i = 0; i < 7; i++) {
            cin >> arr[i] ;
            big = max( big , arr[i]);
            ans += arr[i] ;
        }
        cout << 2*big - ans << '\n' ;
    }

    return 0;
}
