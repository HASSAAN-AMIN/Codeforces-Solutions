/* 
//                 بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ   
//     In the name of Allah, the Most Gracious, the Most Merciful.
// */
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
        int n , m;
        cin >> n >> m ;
        vector< int > arr(n) ;
        for (int i = 0; i < n; i++) {
            cin >> arr[i] ;
        }
        
        int cnt = 1 ;



        for (int i = 1; i < n; i++) {
            int x = 1 ;
            while( i < n && arr[i] == arr[i-1]){
                x++;
                i++;
            }
            cnt = max( cnt , x) ;
        }



        if( cnt >= m)
            cout << "NO" << '\n' ;
        else    
            cout << "YES" << '\n' ;
    }

    return 0;
} 