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

    // int t;
    // cin >> t;
    // while(t--){

        int n;
        cin >> n;

        vector<int> arr(n);

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        vector<int> brr  = arr;

        sort( brr.begin() ,brr.end() ) ; 


        if( arr == brr){
            cout  << "yes" << '\n' ;
            cout  << 1 << ' ' << 1 << '\n';
        }else{
            int l = 0  ; 
            int r = n-1 ;


            for (int i = 0; i < n; i++) {
                if( arr[i] != brr[i] ){
                    l = i ;
                    break ;
                }
            }
            for (int i =  n- 1; i >=  0 ; i--) {
                if( arr[i] != brr[i] ){
                    r = i ;
                    break ;
                }
            }

            reverse( arr.begin() + l , arr.begin() + r +1  ) ;

            if( arr == brr){
                cout  << "yes" << '\n' ;
                cout  << l+1 << ' ' << r+1 << '\n';
            }else
                cout << "no" << '\n' ;


        }


    // }

    return 0;
}