/* 
                بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ   
    In the name of Allah, the Most Gracious, the Most Merciful.
*/
//              EID MUBARAK

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
        long long n , c , k;
        cin >> n >> c >> k ;
        vector<long long > arr(n) ;
        for (int i = 0; i < n; i++) {
            cin >> arr[i] ;
        }
        sort(arr.begin()  ,arr.end()) ;
        for (int i = 0; i < n; i++) {
            if(arr[i] > c)
                break;
            
            long long r = c -arr[i] ;
            if( r > k  ){
                r = k;
            }
            //cout << "r =  :" << r << '\n' ;
            k -= r;
            c += r +arr[i] ;
            //cout << "c = : " << c << '\n' ;

        }
        cout << c << '\n' ;


        
    }

    return 0;
}