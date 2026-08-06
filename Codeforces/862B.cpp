/* 
                بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ   
    In the name of Allah, the Most Gracious, the Most Merciful.
*/
#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;



// global bcz i am lazy 
int l = 0 ;
int r = 0 ;

void dfs( int x , vector<vector<int>> &arr, vector<bool> &vis ,  vector<int> &col , bool val){
    if( vis[x] )
        return ;

    vis[x] = true;
    if(val)
        l++;
    else
        r++ ;
    col[x] = val;
    val = !val ;

    for( int u : arr[x]) {
        dfs( u , arr , vis , col  , val) ;
    }
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // int t;
    // cin >> t;
    // while(t--){
        int n ;
        cin >> n ;

        vector <vector<int> > arr(n ) ;

        for (int i = 0; i < n -1; i++) {
            int x  , y;
            cin >> x >> y;
            x--;
            y--;
            arr[x].push_back(y);
            arr[y].push_back(x); 
        }
        // lets just simply color the graph

        vector<int> col ( n ) ;
        vector<bool> vis( n , false) ;

        // lets just assume that it will be  bipatrite coz ofc
        // of the odd cycle cond we can ignore in this case

        dfs(0 , arr , vis , col , true) ;
        

        for (int i = 0; i < n; i++) {
            // dw its O(n) vis checks
            dfs(i , arr , vis , col , true) ;
        }
        // cout << "l col :  "  <<  l << '\n' ;
        // cout << "r col :  "  <<  r << '\n' ;

        cout << 1ll*l*r - n + 1 << '\n' ;
  //  }

    return 0;
}