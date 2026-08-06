/* 
                بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ   
    In the name of Allah, the Most Gracious, the Most Merciful.
*/
#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;

void dfs_the_tree( vector<vector<int> > arr  , long long ans ){

}

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

        vector< vector<int> > pi( n );

        int x , y ;
        for (int i = 0; i < n - 1; i++) {
            cin >> x >> y ;
            x-- ; y--;
            pi[x].push_back(y);
            pi[y].push_back(x);
        }

        long long ans  = 0 ;

        dfs_the_tree(  pi  , ans ) ;


        cout << ans << '\n' ;
    }

    return 0;
}