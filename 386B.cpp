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

    // int t;
    // cin >> t;
    // while(t--){
    //     int n;
    //     cin >> n;

    //     vector<int> arr(n);

    //     for (int i = 0; i < n; i++) {
    //         cin >> arr[i];
    //     }

        
    // }


    int n ;
    cin >> n; 
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int t ; 
    cin >>t ;
    

    sort( arr.begin() , arr.end())  ; 


    int ans = 1 ;

    // for (int i = 1; i < n; i++) {
    //     arr[i] = arr[i-1]+ arr[i] ;
    // }



    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            if( arr[j] - arr[i] <= t)
                ans = max( ans , j-i+1) ;
        }
    }

    cout << ans << '\n' ;




    return 0;
}