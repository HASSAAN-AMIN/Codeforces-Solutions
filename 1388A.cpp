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
        for (int i = 0; i < n; i++) {
            cin >> arr[i] ;
        }

        int req = 0 ;

        for (int i = 1; i < n; i++) {
            if( arr[i] >=  arr[i-1])
                continue;
            req = max(req , arr[i-1]- arr[i]);
            arr[i] = arr[i-1] ;
        }

        // int t = 0; 
        // while( req >  0){
        //     req = req - (1 << t);
        //     t++;
        // }
        
        // above shi works but this is faster
        cout << ((req==0)?0: 32 - __builtin_clz(req))  << '\n' ;

    }

    return 0;
} 