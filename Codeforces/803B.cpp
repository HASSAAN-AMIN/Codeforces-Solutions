/* 
                بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ   
    In the name of Allah, the Most Gracious, the Most Merciful.
*/
#include <iostream>
#include<vector>
#include<algorithm>
#include <climits>

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
        vector<int> brr( n , INT_MAX) ;
        int x = -1 ;
        for (int i = 0; i < n; i++) {
            if(arr[i] == 0)
                x = i;
            if(x == -1)
                continue;
            brr[i] = min( brr[i] , abs(x-i) );
        }
        for (int i = n -1; i >= 0; i--) {
            if(arr[i] == 0)
                x = i;
            brr[i] = min( brr[i] , abs(x-i) );
        }
        
        for (int i = 0; i <n; i++) {
            cout << brr[i] << ' ';
        }
        cout << '\n' ;
    //}

    return 0;
}