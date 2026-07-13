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


    int a , x ,y ;
    cin >> a >> x >> y; 

    int ans = -1 ;


  //  if( 2*x > -a && 2*x < a){
    if (y % a != 0) {
        int row = y / a + 1;  // 1-indexed row number


        if ( y / a  == 0) {
            if (2 * abs(x) < a) 
                ans = 1;
        }
        else if (row % 2 == 0) {
            if (2 * abs(x) < a)
                ans = 3 * (row / 2) - 1;
        }
        else {
            if (x < 0 && x > -a) {
                ans = 3 * ((row - 1) / 2);
            }
            else if (x > 0 && x < a) {
                ans = 3 * ((row - 1) / 2) + 1;
            }
        }

    }


  //  }
    cout << ans << '\n' ;


    return 0;
}