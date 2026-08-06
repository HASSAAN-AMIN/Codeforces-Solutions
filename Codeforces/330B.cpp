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
        int n , m ;
        cin >> n >> m;
        vector<int> arr(n+1 , 0);
        int x ;
        for (int i = 0; i < 2*m; i++) {
            cin >> x;
            arr[x]++;
        }
        // cout << "array is: \n" ;
        // for (int i = 0; i < n+1; i++) {
        //     cout << "i : " << i << "     arr[i] :" << arr[i] << '\n' ;
        // } 
        for (int i = 1; i <  n+1; i++) {
            if(arr[i] == 0 ){
                x = i;
                break;
            }
        }
        //cout << "selected x is  : "<< x << '\n' ;
        cout << n-1 << '\n' ;

        for (int i = 1; i < n+1; i++) {
            if(i == x)
                continue;
            cout << x ;
            cout << ' ';
            cout << i;
            cout << '\n';
        }
        //cout << " x was : "<< x << '\n';
        
    //}

    return 0;
}