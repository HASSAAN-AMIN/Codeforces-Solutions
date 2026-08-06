/* 
                بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ   
    In the name of Allah, the Most Gracious, the Most Merciful.
*/
#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;
bool sus = false;
void dfs( int x , vector<vector<int>> &arr , vector<bool> &col , vector<bool> &vis  , bool val){
    if( vis[x] ){
        if(col[x] != val)
            sus = true;
        return ;
    }
    vis[x] = true;
    col[x] = val;


    for( int  u : arr[x]){
        dfs( u , arr , col , vis , !val) ;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // this lowk similar to old one
    int n , m ;
    cin >> n >> m;

    vector<vector<int>> arr(n) ;

    for (int i = 0; i < m; i++) {
        int x  , y;
        cin >> x  >>  y;
        x-- ;
        y-- ;
        arr[x].push_back(y);
        arr[y].push_back(x);
    }

    // the color array which tells the color
    vector<bool> col(n  , true) ;
    vector<bool> vis( n  , false) ;

    dfs( 0 , arr  , col , vis ,  true  ) ;
    
    for (int i = 0; i < n; i++) {
        if( !vis[i] ){
            dfs(i , arr , col , vis , true); 
        }
        if( sus){
            cout << "IMPOSSIBLE\n";
            return 0 ;
        }
    }
    

    for (int i = 0; i < n; i++) {
        cout << col[i] + 1 << ' ' ;
    }
    cout << '\n' ;


    return 0;
}