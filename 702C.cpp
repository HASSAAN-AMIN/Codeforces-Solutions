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

    // int t;
    // cin >> t;
    // while(t--){
        int n , m; 
        cin >> n >> m;

        vector<int> arr(n);

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        vector<int> brr(m);
        for (int i = 0; i < m; i++) {
            cin >> brr[i];
        }


        int ans = -1 ;

        vector<int> best( n , INT_MAX) ;
        

        int l = 0 ;

        for (int i = 0; i < n; i++) {
            
            while( l < m && arr[i] > brr[l])
                l++;

            if( l == m)
                break;

            best[i] = min( best[i] , abs( arr[i] - brr[l]) ) ;
            
        }

        l = m-1 ;
        for (int i = n-1; i >= 0 ; i--) {
            while( l >= 0 && arr[i] <= brr[l] )
                l--;

            if( l == -1)
                break;
        
            best[i] = min( best[i] , abs( arr[i] - brr[l])) ;
        }


        for (int i = 0; i < n; i++) {
            ans = max( ans , best[i]); 
        }
        cout << ans << '\n' ; 

        // cout << "Arr \n : ";
        // for (int i = 0; i < n; i++) {
        //     cout << best[i] <<  ' ' ;
        // }

    // }

    return 0;
} 