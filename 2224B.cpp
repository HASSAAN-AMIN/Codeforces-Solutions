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
        int big = 0 ;
        for (int i = 0; i < n; i++) {
            cin >> arr[i] ;
            if(arr[i] > big)    
                big = arr[i] ;
        }

        int ans  = big*n; 

      sort(arr.rbegin() , arr.rend()) ;

        int crnt = 0 ;

        //      [ 1  , 0 ]

        //      [ 0  , 1 ]
        
        // crnt =>  0  1 
        // ans  =>  2   
        
        cout << "crnt : " << crnt  << '\n' ;
        cout << " ans : " << ans   << '\n' ;
        
        for (int i = 0; i < n; i++) {
            if(arr[i] == crnt)
                crnt+=1 ;
            ans += crnt ;
        }

        cout << ans << '\n' ;




    }

    return 0;
}