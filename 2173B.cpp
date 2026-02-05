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
        vector<long long> arr(n);
        vector<long long> brr(n);
        for (int i = 0; i < n ; i++) {
            cin >> arr[i];
        }
        for (int i = 0; i < n ; i++) {
            cin >> brr[i];
        }
        long long ans = 0 ;
        long long bruh  =0 ;
        for (int i = 0; i < n; i++) {
            long long a = max( ans -arr[i] , brr[i] -bruh );
            long long b = min( bruh  - arr[i] , brr[i] - ans);
            ans  = a;
            bruh = b;
        }
        cout << ans << '\n' ;
    }

    return 0;
}