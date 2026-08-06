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
        vector<int> arr(n ) ;
        for (int i = 0; i < n; i++) {
            cin >> arr[i] ;
        }
        bool sus = false;
        sort(arr.rbegin() , arr.rend() ) ;
        for (int i = 0; i < n-1; i++) {
            if(arr[i] == arr[i+ 1])
                sus = true ;
        }
        if(sus)
            cout << -1 << '\n';
        else   
            for (int i = 0; i < n; i++) {
                cout << arr[i] << ' ' ;
            }
            cout << '\n' ;
        
    }

    return 0;
} 