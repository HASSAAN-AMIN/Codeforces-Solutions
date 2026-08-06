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
            cin >> arr[i];
        }

        vector<int> pi(n) ;
        vector<int> shu(n) ;

        for (int i = 0; i < n; i++) {
            pi[i] = arr[i] +i ;
            shu[i] = arr[i] -i ;
        }

        for (int i = 1; i < n; i++) {
            pi[i] = max( pi[i] , pi[i-1]) ;
        }
        for (int i = n-2 ; i >= 0 ; i--) {
            shu[i] = max( shu[i] , shu[i+1]) ;
        }

        int ans =  0;

        for (int i = 1; i < n -1 ; i++) {
            ans = max( ans , pi[i-1] + shu[i+1] + arr[i]) ;
        }
        cout << ans << '\n' ;
    }

    return 0;
}