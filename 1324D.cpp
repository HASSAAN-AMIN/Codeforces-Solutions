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

        vector<int> arr(n);

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        vector<int> brr(n);
        for (int i = 0; i < n; i++) {
            cin >> brr[i];
            brr[i] = arr[i] -brr[i];
        }


        // n sq gonna fail


        sort( brr.begin() , brr.end() ); 

        // brr[i] > -brr[j]

        // smallest -> next all big means neg small ? 

        // x > -y
        // x + y > 0 

        long long  ans  = 0 ;
        for (int i = 0; i < n; i++) {
            if( brr[i] <= 0 )   
                continue;

            int loc = lower_bound( brr.begin() , brr.end() , -brr[i] +1) - brr.begin() ;

            ans += i-loc ;
        }

        cout << ans << '\n' ;

   // }

    return 0;
}