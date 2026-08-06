// /* 
//                 بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ   
//     In the name of Allah, the Most Gracious, the Most Merciful.
// */
// #include <iostream>
// #include<vector>
// #include<algorithm>

// using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;
//     while(t--){
//         int n;
//         cin >> n;
//         vector<long long>arr(n) ;
//         for (int i = 0; i < n; i++) {
//             cin >> arr[i] ;
//         }
//         int ans = 0 ;
//         for (int i = 0; i < n; i++) {
//             if(arr[i] > n-n/2 )
//                 continue;
//             for (int j = i+1; j < n; j++) {
//                 if(arr[i]*arr[j] == j-i)
//                     ans++;
//             }
//         }
//         cout << ans << '\n' ;
//     }

//     return 0;
// }