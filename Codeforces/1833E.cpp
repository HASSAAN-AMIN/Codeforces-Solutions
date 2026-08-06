/* 
                بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ   
    In the name of Allah, the Most Gracious, the Most Merciful.
*/
#include <iostream>
#include<vector>
#include<algorithm>
#include <set>
using namespace std;

void dfs( int x , vector<vector<int>> &arr , vector<bool>& vis , int &n  , int &e ){
    // cout << "enetered with x : " << x+1 << " and st : " << st+1 << '\n' ;  
    // if( vis[x] ){
    //     return  ; 
    // }
    n++; 
    // cout << "passed vis check : " << x+1 << '\n' ;
    vis[x] = true;
    e += arr[x].size();
    for (int u  : arr[x]) {
        if( !vis[u]){
            dfs( u , arr , vis , n ,e ) ;
        }
    }
    
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            a[i]--;
        }

        vector<vector<int>> arr(n);
        for (int i = 0; i < n; i++) {
            int x = a[i];
            if (x < i && a[x] == i) 
                continue;  
            arr[i].push_back(x);
            arr[x].push_back(i);
        }

        // for max just find all contd comps
        // for min ig the ans is like straights + ( cycles  >  1 )caseted to int

        int str = 0 ;
        int gae = 0 ;   
        
        vector<bool> vis(n , false); 

        // bool sus; 
        for (int i = 0; i < n; i++) {
            
            // if(!vis[i] && (seen.find(i) == seen.end()) ){
            if(!vis[i] ){
                //cout << "Calling with i : " << i +1 << '\n' ;
                int n = 0 ;
                int e = 0 ;
                dfs( i , arr ,vis , n ,e ) ;
                if(2* n == e)
                    gae++;
                else
                    str++;
            }
        }

        // cout << " gae :  " << gae << '\n' ;
        // cout << " str :  " << str << '\n' ;

        cout << gae + (int)(str>0)  << ' ' << gae+ str << '\n' ;
    }

    return 0;
}