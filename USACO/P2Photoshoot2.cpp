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
        cin >> n;
        
        vector<int> arr(n) ;
        vector<int> brr(n) ;
        vector<int> see(n  , 0 );
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> brr[i];
        } 

        // 5
        // 5 1 3 2 4
        // 4 5 2 1 3
        int ans =0 ;

        int j = 0 ;
        for (int i = 0; i < n; i++) {
            while( j < n &&   see[arr[j]-1])
                j++;
            if(arr[j] == brr[i])
                j++;
            else{
                ans++;
                see[brr[i]-1] = 1;
            }

        }
        cout << ans << '\n' ;

    //}

    return 0;
} 