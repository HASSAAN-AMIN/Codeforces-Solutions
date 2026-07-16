/* 
                بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ   
    In the name of Allah, the Most Gracious, the Most Merciful.
*/
#include <iostream>
#include<vector>
#include<algorithm>
#include <climits> 
#include <iomanip>

using namespace std;

bool check( double m , vector<int> &arr , vector<int>&brr , int n ){

    double l  = INT_MIN;
    double r  = INT_MAX; 

    // speed = d / time
    // d = s*t
    for (int i = 0; i < n; i++) {
        l = max( l*1.0  , arr[i] - brr[i]*m*1.0 ) ;

        r = min( r*1.0  , arr[i] + brr[i]*m*1.0 ) ;
    }


    return l <=  r; 


}



int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // int t;
    // cin >> t;
    // while(t--){
        int n;
        cin >> n;

        vector<int> arr(n);

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        vector<int> brr(n);
        for (int i = 0; i < n; i++) {
            cin >> brr[i];
        }
        



        // these are times
        double l = 0 ;
        double r = 1e9  ;
        
        


        // for (int i = 0; i < 20; i++) {
        //     cout << check( i , arr , brr , n ) << '\n' ; 
        // }    


        int cnt  = 0 ;
        
        while (r - l > 1e-6){
            cnt++;
            // yo can we get at this time ? 
            double mid = l + ( r-l)/2.0  ;

            if( check( mid , arr , brr , n )){
                // we can definitely meet all at this time
                r = mid;
            }else{
                // we can not --> time increase
                l = mid ;
            }

        } 


        // cout << "Times in search : " << cnt << '\n'  ; 
        cout << fixed << setprecision(12) <<  l << '\n' ;
        // cout << r << '\n' ;

        
//     }

    return 0;
}