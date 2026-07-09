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
        int n , k ;
        cin >> n >> k ;

        vector<long long> arr(n);

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        if( k  > 2 ){
            cout << 0 << '\n' ;
            continue; 
        }
        sort( arr.begin() , arr.end()) ;
        long long ans = arr[0]; 

        for (int i = 1; i < n; i++) {
            ans = min( ans , arr[i] -arr[i-1]) ;
        }


        if( k ==1 )
            cout << ans << '\n' ;
        else{

            for (int i = 0; i < n; i++) {
                for (int j = i+1; j < n; j++) {
                    long long cur = arr[j] - arr[i] ;

                    int pos = lower_bound( arr.begin() , arr.end() , cur) - arr.begin() ;
                    
                    if( pos > 0)
                        ans = min( ans , cur  - arr[pos-1 ] ) ;
                    if( pos < n)
                        ans = min( ans , arr[pos] - cur ) ;

                
                }
            }

            cout << ans << '\n' ;


        }
        
    }

    return 0;
} 