/* 
                بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ   
    In the name of Allah, the Most Gracious, the Most Merciful.
*/
#include <iostream>
#include<vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // int t;
    // cin >> t;
    // while(t--){
    //     int n;
    //     cin >> n;
        
    // }

    int n , m ;
    cin >> n >> m ;
    vector< vector<char> > arr( n  , vector<char>(m)) ;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j] ;
            if(arr[i][j] == '-')
                continue;
            
            arr[i][j] = (i+j)%2?'W':'B' ;
            
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << arr[i][j] ;
        }
        cout << '\n' ;
    }

    

    return 0;
}