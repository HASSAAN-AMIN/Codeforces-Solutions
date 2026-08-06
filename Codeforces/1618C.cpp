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
        vector<long long> arr(n) ;
        long long  rhcf = 0 , lhcf = 0 ;

        for (int i = 0; i < n; i++) {
            cin >> arr[i] ;
            if(i%2 == 0){
                rhcf = __gcd( rhcf , arr[i]) ;
            }else{
                lhcf = __gcd( lhcf , arr[i]) ;
            }
        }
        bool sus = true;

        for (int i = 0; i < n; i += 2 ) {
            if(arr[i] % lhcf == 0){
                sus = false ;
                break;
            }
        }
        if(sus && lhcf > 0 ){
            cout << lhcf << '\n' ;
            continue;
        }

        sus = true ;
        for (int i = 1; i < n; i += 2) {
            if(arr[i] % rhcf == 0){
                sus = false ;
                break;
            }
        }
        if(sus &&  rhcf > 0){
            cout << rhcf << '\n' ;
            continue;
        }

        cout << 0 << '\n'  ;


        // if(rhcf == 0 && lhcf ==0){
        //     cout << 0 << '\n' ;
        // }else{
        //     bool sus  = false ;
        //     if(rhcf){
        //         for (int i = 1; i < n; i+= 2) {
        //             if(arr[i] % rhcf ==  0){
        //                 sus = true ;
        //                 break ;
        //             }
        //         }
        //         if(!sus)
        //             cout << rhcf << '\n' ;
        //     }else{
        //         if(!sus)
        //             break;
        //         sus = false;
                
        //             for (int i = 0; i < n; i+= 2) {
        //                 if(arr[i] % lhcf ==  0){
        //                     sus = true ;
        //                     break ;
        //                 }
        //             }
        //         if(!sus)
        //             cout << lhcf << '\n' ;
        //     }
        //     if(sus)
        //         cout << 0 << '\n' ;
        // }


    }

    return 0;
}