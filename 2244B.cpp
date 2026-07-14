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

        vector<int> arr(n +1 );

        bool sus  = false ;
        long long cnt = 0  ;
        for (int i = 1; i <= n; i++) {
            cin >> arr[i];
            if( !sus ){
                if( arr[i] == 0 ){
                    sus = true;
                    continue;
                }
                //arr[i] += cnt ; 
                if( arr[i] + cnt < i){
                    sus = true; 
                }else{
                    cnt =  arr[i] + cnt  - i ;
                }
            }
            
        }


        if( sus) 
            cout << "NO" << '\n' ;
        else
            cout << "YES" << '\n' ;

    }

    return 0;
}