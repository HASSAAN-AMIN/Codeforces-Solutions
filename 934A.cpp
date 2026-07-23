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

    int n , m; 
    cin >> n >> m ;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    vector<int> brr(m);
    for (int i = 0; i < m; i++) {
        cin >> brr[i];
    }


    // there could be neg nums also

    // small constraints just gonna bruteforce sir
    long long ans = 9223372036854775807  ;


    for (int i = 0; i < n; i++) {
        long long cnt = -9223372036854775808 ; 

        for (int j = 0; j < n; j++) {
            if( j == i)
                continue;
            for (int k = 0; k < m; k++) {
                cnt = max( cnt , (1ll*arr[j])*brr[k]);
            }
        }

        ans  = min( cnt , ans ) ;
    }
    cout << ans << '\n' ;

    return 0;
}