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

        vector<int> arr(n);
        int y = 0 ; 
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            y += arr[i] ;
        }
        vector<int> brr(n);
        int  x = 0 ;
        for (int i = 0; i < n; i++) {
            cin >> brr[i];
            x+= brr[i] ;
        }

        bool same  = true;
        int cnt = 0;
        
        for (int i = 0; i < n; i++) {
            if (arr[i] != brr[i]) {
                same  = false;
                if (arr[i] == 1 && brr[i] == 0)
                    cnt++;
            }
        }

        if (same) {
            cout << 0 << '\n';
        }else if ( x == n || y == 0) {
            cout << -1 << '\n';
        }else if (cnt % 2 == 1) {
            cout << 1 << '\n';
        }else {
            cout << 2 << '\n';
        }

        
    }

    return 0;
}