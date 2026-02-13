/* 
                بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ   
    In the name of Allah, the Most Gracious, the Most Merciful.
*/
#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;
void dfs( int i , vector<vector<int>> &brr , vector<bool>& vis , long long &ans , vector<long long> &arr ){
    vis[i] = true;
    ans = min(ans , arr[i] );
    for(auto x : brr[i]){
        if(!vis[x])
            dfs(x , brr , vis , ans ,arr) ;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // int t;
    // cin >> t;
    // while(t--){
        int n,m;
        cin >> n >> m;
        vector<long long> arr(n) ;
        for (int i = 0; i < n; i++) {
            cin >> arr[i] ;
        }
        vector<vector<int>>esh(n);
        for (int i = 0; i < m; i++) {
            int x , y;
            cin >> x >> y;
            x--;
            y--;
            esh[x].push_back(y);
            esh[y].push_back(x);
        }
        vector<bool> visited (n , false);
        long long cnt = 0 ;
        for (int i = 0; i < n; i++) {
            if( visited[i] == false){
                long long ans = 9223372036854775807;
                dfs(i , esh , visited , ans , arr);
                cnt += ans;
            }
        }
        cout << cnt << '\n' ;
   // }

    return 0;
}