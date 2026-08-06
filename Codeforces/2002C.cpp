/* 
                بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ   
    In the name of Allah, the Most Gracious, the Most Merciful.
*/
#include <iostream>
#include<vector>

using namespace std;

long long  dist( int x  , int y , int a , int b ){
    return ( (x-a)*(x-a) + (y-b)*(y-b)) ;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<long long> arr(n +2) ;
        vector<long long> brr(n+ 2) ;
        for (int i = 0; i < n +2 ; i++) {
            cin >> arr[i] ;
            cin >> brr[i] ;
        }
        bool sus = false;

        for (int i = 0; i < n; i++) {
            if( dist)
        }

        if(sus) 
            cout << "NO" << '\n';
        else    
            cout << "YES" << '\n' ;
    }

    return 0;
}