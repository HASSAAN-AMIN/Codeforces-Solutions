/* 
                بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ   
    In the name of Allah, the Most Gracious, the Most Merciful.
*/
#include <iostream>
#include<vector>
#include<algorithm>

#include <climits> 

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        
        int m  ;
        cin >> m ;

        vector<int> arr(n);

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        vector<bool> brr(n , false);
        for (int i = 0; i < m; i++) {
            int x ;
            cin >> x ;
            brr[x-1] = true;
        }

        // max min
        
        long long hi = 0;      
        //long long lo = INT_MIN;      
        long long lo = -(1LL << 60);

        for (int i = n -1  ; i >=  0; i--) {

            if (brr[i] == true) {

                long long prev = max(hi, lo);
                
                hi = prev + arr[i];
                lo = prev - arr[i];

            }else{

                hi = hi + arr[i];
                lo = lo - arr[i];

            }

        }

        cout << max(hi, lo) << '\n';




        
    }

    return 0;
}