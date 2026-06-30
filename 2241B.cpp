/* 
                بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ   
    In the name of Allah, the Most Gracious, the Most Merciful.
*/
#include <iostream>
#include<vector>
#include<algorithm>
#include <unordered_map>

using namespace std;

// bool works(long long n) {
//     bool arr[10] = {};
//     int cnt = 0;
//     while (n) {
//         int d = n % 10;
//         if (!arr[d]) {
//             arr[d] = true;
//             cnt++;
//             if (cnt > 2) 
//                 return false;
//         }
//         n /= 10;
//     }
//     return true;
// }
// bool works(long long n) {
    
    
//     if (n < 100) 
//         return true;

//     int m = 0;   
//     int cnt  = 0;   

//     while (n) {
//         int bit = 1 << (n % 10);   
//         if ((m & bit) == 0) { 
//             // new
//             m |= bit;
//             cnt++; 
//             if (cnt > 2) 
//                 return false;  
//         }
//         n /= 10;
//     }
//     return true;
// }

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // vector<long long> pre ;

    // long long  maxy = 10000000 ; 
    // for (long long i = 2; i < maxy ; i++) {
    //     if( works(i) )  
    //         pre.push_back(i); 
    // }

    // for( auto i : pre )
    //     cout << i << ' ' ;
    // cout << '\n' ;
    int t;
    cin >> t;
    while(t--){
        long long  x ;
        cin >> x ;

        // 11  10 + 1
        // 111 100 + 100 +1
        // 67 ->  67000 + 


        // i am so dumb 

        int  l = 0 ;
        int ll = x ;
        while( ll > 0 ){
            ll /=10;
            l++;
        }


        long long y  = 1 ;

        for (int i = 0; i < l; i++) {
            y = y*10 ;
        }
        y++ ;

        cout << y << '\n' ;
        // bool sus = false ;
        // int ans  = 0 ;
        // for (auto y : pre) {
        //     if (works(x * y)) {
        //         sus =true ;
        //         ans = y ;
        //         break;
        //     }
        // }
        // if( sus )
        //     cout << ans << '\n';
        // else
        //     cout << "check"<< '\n'; 
    }

    return 0;
} 