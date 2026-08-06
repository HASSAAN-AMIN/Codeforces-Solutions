/* 
                بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ   
    In the name of Allah, the Most Gracious, the Most Merciful.
*/
#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;


void connect( int x , vector<bool> &vis ,  vector<vector<int> > &arr){
    if( vis[x])
        return;
    vis[x] = true;

    for( int i : arr[x]){
        if( vis[i] == false){
            connect(i , vis , arr) ;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,  m;
    cin >> n >> m ;

    vector< vector<int>>  arr( n) ;

    for (int i = 0; i < m; i++) {
        int x , y; 
        cin >> x >> y ;
        x--;
        y--;
        arr[x].push_back(y);
        arr[y].push_back(x);
    }

    // connected compnonetes
    // we need to connect every node

    vector< bool > vis ( n , false) ;

    // if disconnected
    // connect to smth?
    // smth ?
    // choose 1 always there
    

    // those already connected
    connect( 0 , vis , arr) ;

    int cnt =  0;
    vector<int> ans ; 
    for (int i = 0; i < n; i++) {
        if( vis[i] == false){
            cnt++;
            ans.push_back(i+1) ;
            connect(i , vis , arr) ;
        }
    } 
    cout << cnt << '\n' ;
    for (int i = 0; i < cnt; i++) {
        cout << 1 << ' ' << ans[i] << '\n' ;
    }


    return 0;
}  