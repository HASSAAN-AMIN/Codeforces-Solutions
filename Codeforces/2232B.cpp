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
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i] ;
        }
        long long  x = 0 ; 
        long long mini = 2e9 ;
        for (int i = 0 ; i < n; i++) {

            x += arr[i] ;

            mini = min( x/(i +1)  , mini ) ;
            arr[i] = mini ;

            // x += max( 0 , arr[i-1] - arr[i] );
            
            // arr[i] = min( arr[i] , arr[i-1]) +( (x>0)?x/(1+1):0) ; 
            // if(x > 0 )
            //     x -= x/2 ;
        }

        for (int i = 0; i <n; i++) {
            cout << arr[i] << ' '; 

        }
        cout << '\n' ;
        
    }

    return 0;
}