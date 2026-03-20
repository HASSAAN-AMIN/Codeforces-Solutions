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
        int n  , k ;
        cin >> n >> k ;
        vector<int> arr(n) ;
        for (int i = 0; i < n; i++) {
            cin >> arr[i] ;
        }

        int curr = arr[k - 1] ;
        int to = arr[ k -  1 ] ;
        sort(arr.begin()  ,arr.end() );

        bool sus = false;
        
        for (int i = 0; i < n; i++) {
            if(arr[i] < curr)
                continue;

            if( (arr[i] - curr)  > to ){
                sus = true;
                break;
            }
            curr = arr[i] ;
        }


        // 6 2
        // 2 3 6 9 1 2
        // sorted :
        // 1 2 2 3 6 9 
        // s s s h . .
        


        if( sus )
            cout << "NO" << '\n' ;
        else
            cout << "YES" << '\n' ;

        
    }

    return 0;
}