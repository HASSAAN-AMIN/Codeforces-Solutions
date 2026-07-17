/* 
                بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ   
    In the name of Allah, the Most Gracious, the Most Merciful.
*/
#include <iostream>
#include<vector>
#include<algorithm>
#include <unordered_map>


using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n;
        int k ;

        cin >> n;
        cin >> k ;

        vector<int> arr(n);

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }


        // why the problem seems easy ? 
        // okay lets think

        // observation
        // just add some integer to every arr[i]
        // to make that div by k
        // but all should be unique

        // constraints high

        // just ask every num how much they need ?
        // to be div by k ? 

        vector<int> brr(n);


        for (int i = 0; i < n; i++) {
            brr[i] = (k - arr[i]%k)%k ;
        }

        // right ?

        // Quick check
        // for (int i = 0; i < n; i++) {
        //     cout << brr[i] << ' ';
        // }
        // cout << '\n' ;


        unordered_map< int , int > cnt ; 

       // int pishu = -1 ;
        for (int i = 0; i < n; i++) {
            if( brr[i] != 0){
                cnt[brr[i]]++ ;
               // pishu = max( pishu , brr[i]) ;
            }
        }

        long long ans = 0 ; 
        for( auto x : cnt){
            //if( x.second == pishu){
                ans = max( ans , x.first +1 + k*(x.second-1ll)) ; 
            //}  
        }

        cout << ans << '\n' ;
        
    }

    return 0;
}