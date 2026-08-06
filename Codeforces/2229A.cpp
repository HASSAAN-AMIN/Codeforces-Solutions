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
        int a  = 1001 , b  = 0 ;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            a = min(a  , arr[i]) ;
            b = max( b , arr[i]) ; 
        }
        int ans =  (a+b)/2 ;
        int k = 0 ;
        for (int i = 0; i < n; i++) {
            k = max( k , abs(arr[i] - ans)) ;
        }

        cout << k << '\n' ;
        
    }

    return 0;
}

/*
2
0
3
2
4
4
4
5
5
500

*/