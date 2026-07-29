/* 
                بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ   
    In the name of Allah, the Most Gracious, the Most Merciful.
*/
#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;




void dfs( int x , vector<vector<int>> &arr, vector<bool> &vis ,   int prev , int start , bool& sus ){
    if( vis[x] ){
        // if( x != start){
            
        //     cout << "falsing : "<< x +1 << " yeah" << '\n';
        //     cout << "start was : " << start +1 << '\n' ;
        //     sus = false;
        // }
        return ;
    }

    vis[x] = true;

    if(arr[x].size() != 2){
        sus = false ;
    }
    
    for( int u : arr[x]) {
        if( u != prev){
            dfs( u , arr , vis ,  x , start , sus  ) ;
            
        }
    }
    
}

int main() {
    // ios::sync_with_stdio(false);
    // cin.tie(nullptr);

    // int t;
    // cin >> t;
    // while(t--){
        int n ;
        cin >> n ;
        int m ;
        cin >> m; 

        vector <vector<int> > arr(n ) ;

        for (int i = 0; i < m; i++) {
            int x  , y;
            cin >> x >> y;
            x--;
            y--;
            arr[x].push_back(y);
            arr[y].push_back(x); 
        }
        


        
        vector<bool> vis( n , false) ;


        int cnt  = 0 ;

        for (int i = 0; i < n; i++) {
            if( !vis[i]){
                bool sus  = true;
               // cout << "calling with : " << i+1 << '\n';
                dfs(i , arr , vis , -1  , i ,sus) ;
                if( sus){
                 //   cout << "here : " << i+1 << '\n'; 
                    cnt++;
                }
            }
        }
        
        cout << cnt<< '\n' ;
  //  }

    return 0;
}