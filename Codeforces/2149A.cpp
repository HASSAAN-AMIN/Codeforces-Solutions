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
        int ans = 0  ;
        int neg = 0;
        for (int i = 0; i < n; i++) {
            cin >> arr[i] ;
            if(arr[i] == 0)
                ans++;
            if(arr[i] < 0)
                neg++;
        }
        ans += 2*(neg%2) ;
        cout << ans << '\n' ;
    }

    return 0;
}