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
        int n , k;
        cin >> n >> k ;
        vector<int> cnt ;
        int x ;
        int crnt = 0 ;
        for (int i = 0; i < n; i++) {
            cin >> x ;
            if(x == 0)
                crnt++;
            else{
                if(crnt != 0){
                    cnt.push_back(crnt +1 );
                    crnt = 0;
                }
            }
        }
        if(crnt != 0)
            cnt.push_back(crnt);
        
        // for (int i = 0; i < cnt.size(); i++) {
        //     cout << cnt[i] << ' ';
        // }
        // cout << '\n' ;

        int ans = 0;
        for(int i = 0 ; i < cnt.size() ; i++){
            ans += (cnt[i]/(k+1)) ; 
        } 
        cout << ans << '\n' ;

    }

    return 0;
}