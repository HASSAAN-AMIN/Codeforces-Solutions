/* 
                بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ   
    In the name of Allah, the Most Gracious, the Most Merciful.
*/
#include <iostream>
#include<vector>
#include<algorithm>
#include <map>
#include <set>


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
        for (int i = 0; i < n; i++) 
            cin >> arr[i] ;
        map< int , pair<int, int> > pishu ; 
        for (int i = 0; i < n; i++) {
            int x = arr[i] ; 
            set<int> vis ; 
            int ops = 0 ;
            while(!vis.count(x)){
                vis.insert(x) ;
                if( i == 0 || pishu.count(x)){
                    pishu[x].first += ops ; 
                    pishu[x].second += 1 ;
                }
                ops++;
                if(x%2)
                    x++;
                else 
                    x /= 2; 
            }
        }
        int ans  = 2e9 ;

        for( auto it : pishu)
            if(it.second.second == n)
                ans = min( ans  , it.second.first) ;
        cout << ans << '\n' ;

    }

    return 0;
}