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


        vector<bool> forest( n , false);
        int ans = 0 ;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            x--;
            if( x == i)
                ans+=2;
            else if( !forest[x]){
                forest[x] = true;
                ans++;
            }
        }
        cout << ans/2 << '\n' ;

   // }

    return 0;
}