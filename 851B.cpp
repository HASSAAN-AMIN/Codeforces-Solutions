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
        int n;
        // cin >> n;
        n = 6 ; 
        vector<long long> arr(n);

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        
        if( ((arr[3]-arr[1])*( arr[4]-arr[2]) != (arr[5]-arr[3])*(arr[2]-arr[0])) && ( (arr[3]-arr[1])*(arr[3]-arr[1]) + (arr[2]-arr[0])*(arr[2]-arr[0])  == (arr[5]-arr[3])*(arr[5]-arr[3])+ ( arr[4]-arr[2])*( arr[4]-arr[2]) ) )
            cout << "YES" << '\n' ;
        else
            cout << "NO" << '\n' ;
            


        
   // }

    return 0;
}