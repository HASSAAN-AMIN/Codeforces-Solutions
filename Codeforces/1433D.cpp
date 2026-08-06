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

        // idk why but i was thinking of the star graph 
        // istg using that is so coooool 

        // guess what we lowk using it here again

        vector< pair<int, int>> ans ;
        int idx = -1 ;
        for (int i = 1; i < n; i++) {
            if(arr[0] != arr[i] ){
                idx = i;
                ans.push_back( { 1 , i+1 } ) ;
            }
        }
        if(idx == -1 ){
            cout << "NO\n" ;
            continue;
        }
        for (int i = 1; i < n; i++) {
            if( arr[0] == arr[i]){
                ans.push_back({idx +1 , i+ 1 }) ;
            }
        }
        cout << "YES\n" ;
        for (int i = 0; i < n-1 ; i++) {
            cout << ans[i].first << ' ' << ans[i].second << '\n' ;
        }
        cout << '\n' ;


    }

    return 0;
}