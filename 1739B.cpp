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
        for (int i = 0; i < n; i++) {
            cin >> arr[i] ;
        }
        bool sus  = false;
        for (int i = 1; i < n; i++) {
            int p = arr[i-1] + arr[i];
            int m = arr[i-1] - arr[i];

            if( m >=  0 && arr[i] != 0 ){
                sus =true ;
                break;
            }
            arr[i] = p ;
        }
        if(!sus)
            for (int i = 0; i < n; i++) {
                cout << arr[i] << ' ' ;
            }
        else
            cout << -1 ; 
            
        cout << '\n' ;
        
    }

    return 0;
}