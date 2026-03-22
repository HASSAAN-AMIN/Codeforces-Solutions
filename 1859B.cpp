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
        vector<vector<int>> arr(n); 
        vector<int> scnd ;
        int x;
        int s = 1e9 +1 ;
        for (int i = 0; i < n; i++) {
            cin >> x;
            int y ;
            for (int j = 0; j < x; j++) {
                cin >> y;
                s = min( s , y );
                arr[i].push_back(y);
            }
            sort( arr[i].begin() , arr[i].end() );
            scnd.push_back( arr[i][1] ) ;
        }
        int lol = scnd[0];
        long long t = 0 ;
        for (int i = 0; i < scnd.size(); i++) {
            t += scnd[i] ;
            lol = min( lol , scnd[i] );
        }

        cout << t + s - lol*1ll << '\n' ;

    }

    return 0;
}