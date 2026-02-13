// /* 
//                 بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ   
//     In the name of Allah, the Most Gracious, the Most Merciful.
// */
// #include <iostream>
// #include<vector>
// #include<algorithm>
// #include <climits>

// using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;
//     while(t--){
//         int n;
//         cin >> n;
//         vector<int> arr(n);
//         int maxy = INT_MIN ;
//         int zeroes = 0;
//         for (int i = 0; i < n; i++) {
//             cin >> arr[i];
//             if(arr[i] == 0)
//                 zeroes++;
//             maxy = max( maxy , arr[i]);
//         }
//         cout << min( maxy-zeroes  , n ) << '\n' ;
//     }

//     return 0;
// }