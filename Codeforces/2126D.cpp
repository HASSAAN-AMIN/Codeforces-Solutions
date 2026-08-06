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
        int n  ,k ;
        cin >> n >> k ;

        vector< vector<int> > arr( n , vector<int>(3)) ;

        for (int i = 0; i < n; i++) {
            cin >> arr[i][0] 
            >> arr[i][1]
            >> arr[i][2]; 
        }  
        sort( arr.begin() , arr.end()) ;

        for (int i = 0; i < n; i++) {
            if( k >= arr[i][0 ] && k <= arr[i][1])
                k = max( k  , arr[i][2]);
        }

        cout << k << '\n' ;

    }

    return 0;
}