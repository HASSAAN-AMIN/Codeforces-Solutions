/* 
                بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ   
    In the name of Allah, the Most Gracious, the Most Merciful.
*/
#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
    // ios::sync_with_stdio(false);
    // cin.tie(nullptr);

    // vector<int> arr( 1e5 );
    // arr[0]= 0;
    // for (int i = 1; i < 1e5; i++) {
    //     arr[i] = arr[i-1] + 1 ;
    // }   
    int t;
    cin >> t;
    while(t--){
        int w , b;
        cin  >>  w>> b ;
        int x = w+ b;   
        int l = 1 ;
        int r = 1e5;

        while( l < r){
            int m = l + (r-l)/2 ;
            // cout << " l : " << l << "   ,   r : " << r << '\n' ;
            // cout << " m  is : " << m << '\n' ;
            // cout << " the is : "<< ((1ll*m*m)+m)/2 << '\n'; 
            if( ((1ll*m*m)+m)/2 >  x){
                r =  m ;
            }else{
                l = m +1;
            }
        }
        cout << l  -1<< '\n' ;
    }

    return 0;
}