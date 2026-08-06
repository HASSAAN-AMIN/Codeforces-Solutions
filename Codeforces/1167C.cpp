/* 
                بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ   
    In the name of Allah, the Most Gracious, the Most Merciful.
*/
#include <iostream>
#include<vector>
#include<algorithm>


using namespace std;



void dfs(int u, vector<vector<int>>& arr, vector<bool>& vis, vector<int>& comp) {
    vis[u] = true;
    comp.push_back(u);

    for (int v : arr[u])
        if (!vis[v])
            dfs(v, arr, vis, comp);
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // int t;
    // cin >> t;
    // while(t--){
        int n , m;
        cin >> n;
        cin >> m ;

        vector<int> ans(n , 0);

        vector< vector<int> > arr (n) ;


        for (int i = 0; i < m; i++) {

            int x; 
            cin >> x;
            if( x == 0 )
                continue;
            if( x == 1 ){
                cin >> x;
                continue;
            }
                
            int p ;
            cin >> p; 
            for (int i = 0; i < x-1; i++) {
                int f ;
                cin >> f ;
                arr[p-1].push_back( f-1 );
                arr[f-1].push_back( p-1 ); 
            }
        }

        // graph made 


        
        // for (int i = 0; i < n; i++) {
        //     int pishu = 0 ;

        //     vector<bool > vis( n  , false) ;
        //     dfs( i  , arr  ,pishu , vis ) ;

            

        //     ans[i] = pishu ;
        // }
        vector<bool> vis(n, false);
        vector<int> comp;

        for (int i = 0; i < n; i++) {
            if (!vis[i]) {
                comp.clear();
                dfs(i, arr, vis, comp);

                int sz = comp.size();
                for (int x : comp)
                    ans[x] = sz;
            }
        }

        

        for (int i = 0; i <n; i++) {
            cout << ans[i] << ' ' ;
        }
        
        // for (int i = 0; i < n; i++) {
        //     cout << i +1 << ' ' << ": \n" ;
        //     for( int x : arr[i])    
        //         cout << x +1<< ' ' ;
        //     cout << '\n' ;
        // }



        
  //  }

    return 0;
}