/* 
                بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ   
    In the name of Allah, the Most Gracious, the Most Merciful.
*/
#include <iostream>
#include<vector>
#include<algorithm>
#include <unordered_map>
#include <cmath>


using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n , m; 
        cin >> n >>  m; 
        vector<int> arr(n) ;
        vector<int> brr(n) ;

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        for (int i = 0; i <n; i++) {
            cin >> brr[i] ;
        }
        unordered_map<int , int > mapy ;


        for (int i = 0; i < n; i++) {
            
            for (int x = arr[i]-brr[i]; x <= arr[i]+brr[i]; x++) {

                int cnt = 2 * (int)sqrt(1LL*brr[i]*brr[i] - (1LL*x - arr[i])*(1LL*x - arr[i])) + 1;

                mapy[x] = max(mapy[x], cnt);
            }
        }
        long long ans = 0 ;
        for( auto x : mapy){
            ans += x.second ;
        }

        cout << ans << '\n'  ; 


    }

    return 0;
}