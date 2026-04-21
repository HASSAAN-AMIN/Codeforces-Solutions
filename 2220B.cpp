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
//         vector< int > arr(n) ;
//         for (int i = 0; i < n; i++) {
//             cin >> arr[i] ;
//         }
//         for (int i = 0; i < n; i++) {
//             arr[i] = (arr[i] + i + 1)%m ;
//         }
//         bool sus = true ; 

//         for (int i = 0; i < m; i++) {
//             sus = false ;
//             for (int j = 0; j < n; j++) {
//                 if(arr[i] == m-1){
//                     sus = true ;
//                     break ;
//                 }
//             }
//             if(!sus)
//                 break ;
//         }
//         if(sus)
//             cout << "NO" << '\n' ;
//         else    
//             cout << "YES" << '\n' ;
//     }

//     return 0;
// } 