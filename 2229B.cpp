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
        vector<int> brr(n) ;
        
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        for (int i = 0; i < n; i++) {
            cin >> brr[i];
        }

        for (int i = 0; i < n; i++) {
            if(arr[i] > brr[i])
                swap( arr[i] , brr[i] ) ;
        }

        long long  x  =  0 ;
        for (int i = 0; i < n; i++) {
            x = max( (long long )arr[i]   , x ) ;
        }
        // 20 minutes wasted on this 
        // fahhhhhhhhhh
        // cryin 
        // just a long long issue
        long long  k = 0 ;
        for (int i = 0; i < n; i++) {
            k += brr[i] ;
        }
        
        cout <<  k + x << '\n' ; 
        
    }

    return 0;
} 