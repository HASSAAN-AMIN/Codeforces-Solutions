/* 
                بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ   
    In the name of Allah, the Most Gracious, the Most Merciful.
*/
#include <iostream>
#include<vector>
#include<algorithm>

#include <queue>

using namespace std;
// note to self later: 
// commented code also worked actually i am doing same prob with bfs now 
// why ? coz i havent seen bfs prob and i wonder if i could implment witht these constr or not


// void dfs(int u , vector<vector<int>> &arr , vector<bool> &vis  , vector<bool> &col , bool val){

//     vis[u] = true;
//     col[u] = val;

//     for( int v : arr[u]){
//         if(!vis[v]){
//             dfs(v , arr ,vis , col , !val) ;
//         }
//     }
// }


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        
        int n , m ;
        cin >> n >> m ;


        vector<vector<int>> arr(n) ;

        for (int i = 0; i < m; i++) {
            int x  ,y;
            cin >> x >> y;
            x-- ;
            y--;
            arr[x].push_back(y);
            arr[y].push_back(x);
        }
        // make a bipatrite graph
    
        vector<bool> col(n ) ;
        vector<bool> vis( n , false) ;

        // for (int i = 0; i < n; i++) {
        //     if(!vis[i]){
        //         dfs( i , arr , vis , col , true);
        //     }
        // }



        queue<int> q;

        q.push(0);
        vis[0] = true;
        col[0] = 0;

        while(!q.empty()){
            int u = q.front();
            q.pop();

            for(int v : arr[u]){
                if(!vis[v]){
                    vis[v] = true;
                    col[v] = !col[u];
                    q.push(v);
                }
            }
        }

        
        vector<int> red , blue; 
        for (int i = 0; i < n; i++) {
            if(col[i])
                red.push_back(i);
            else
                blue.push_back(i);
        }


        if( red.size() <= n/2){
            cout << red.size() << '\n' ;
            for (int i = 0; i < red.size(); i++) {
                cout << red[i] +1  << ' ';
            }
            cout << '\n' ;
        }else{
            cout << blue.size() << '\n' ;
            for (int i = 0; i < blue.size(); i++) {
                cout << blue[i] +1 << ' ';
            }
            cout << '\n' ;
        }

    }

    return 0;
}