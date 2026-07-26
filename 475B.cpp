/* 
                بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ   
    In the name of Allah, the Most Gracious, the Most Merciful.
*/
#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;


bool check( int n , int m  ,  vector< vector<bool> > &vis){

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if( vis[i][j] == false)
                return false;
        }
    }

    return true;
}

void foo( vector< vector<bool> > &vis  , string a , string b , int n ,int m, int  i , int j){
    
    if( i < 0 || j < 0 || i >= n || j >= m)
        return ;


    if(vis[i][j])
        return;
    
    vis[i][j] = true;
    
    // 4 6
    // < > < >
    // v ^ v ^ v ^ 

    if( a[i] == '>')
        foo( vis, a, b , n , m , i , j+1) ;
    else
        foo( vis, a, b , n , m , i, j-1) ;

    if( b[j] == 'v')
        foo( vis, a, b , n , m , i+1 , j) ;
    else
        foo( vis, a, b , n , m , i-1 , j) ;


}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n , m ;
    cin >> n >> m ;
    
    string a , b ;
    cin >> a  >>  b;


    // we just like need to move witht the flow yk

    bool sus = true;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            vector< vector<bool> > vis( n , vector<bool>(m , false) ) ;
            foo( vis, a, b , n , m , i , j) ;
            sus = check( n , m , vis)  ;

            // cout  << "sus :" << sus << '\n' ;
            // if( sus ){
            //     cout << "yo " << i <<  ' ' << j  << '\n' ;
            // }else{
            //     cout << "boogie " << i <<  ' ' << j  << '\n' ;
            // }
        }
        if( sus == false){
            break;
        }
    }
    if( sus )
        cout << "YES" << '\n'; 
    else    
        cout << "NO" << '\n' ;



    return 0;
}
