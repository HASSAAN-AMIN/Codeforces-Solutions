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
//         int n , m;
//         cin >> n >> m ;
//         vector<int> arr(n) ;
//         for (int i = 0; i < n; i++) {
//             cin >> arr[i]; 
//         }
//         int x ;
//         for (int i = 0; i < m; i++) {
//             cin >> x ;
//         }   
//         sort(arr.begin() , arr.end());
//         int sum = 0 ;
//         for (int i = 0; i < n-m; i++) {
//             sum += arr[i] ;
//         }
//         cout <<sum << '\n' ; 
        
//     }

//     return 0;
// }