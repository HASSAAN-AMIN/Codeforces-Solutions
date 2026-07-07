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

        bool sus = true ;


        int cnt =  0;
        bool down = false;

        for (int i = 1; i < n; i++) {
            if( down ){
                if( arr[i] <= arr[i-1] )
                    continue;
                else{
                    down = false;
                }
            }
            if( arr[i] >= arr[i-1])
                continue;
            else{
                cnt++; 
                down = true;
            }            
        }
        if( cnt > 1 || ( n > 1 && arr[0] <= arr[1] ))
            sus = false;


        if( sus )
            cout << "YES\n" ;
        else
            cout << "NO" << '\n' ; 



    // }

    return 0;
}