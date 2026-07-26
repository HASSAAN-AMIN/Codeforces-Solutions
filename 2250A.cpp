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

        bool sus = true;

        vector<int> arr(n);

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }


        // sort( arr.begin() , arr.end() ) ;  

        int e = 0  ;
        int o  = 1e9 ;

        if( n %2 == 1)
            sus = false;
        else{
            for (int i = 0; i < n; i++) {
                if( i%2 == 0){
                    o = min(o , arr[i]);
                }else{
                    e = max( e , arr[i]); 
                }
            }
        }
        if( n%2 == 0)
            sus = (e - o < -1 );  
        
            
        // cout << "e :  " << e << '\n';
        // cout << "o : " << o << '\n' ;

        // vector<int> brr(n);

        // for (int i = 0; i < n; i++) {
        //     brr[i] = arr[i]+ 
        // }




        if( sus )
            cout << "YES" << '\n' ;
        else
            cout << "NO" << '\n' ;

    }

    return 0;
} 