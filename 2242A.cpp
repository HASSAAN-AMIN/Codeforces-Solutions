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

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        

        bool sus = false;
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            if( arr[i] > 2)
                sus = true;
            if( arr[i] >= 2){
                cnt++;
            }
        }

        if( sus || cnt > 1)
            cout << "YES" << '\n' ;
        else
            cout << "NO" << '\n' ;



        
    }

    return 0;
} 