/* 
                بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ   
    In the name of Allah, the Most Gracious, the Most Merciful.
*/
#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool check( int i , int j , vector<vector<char>> &arr){
    if( i < 0  || j < 0 || i >= arr.size() || j >= arr[i].size() || arr[i][j] != '.')
        return false;
    return true;
}


//bool run( int i , int j  , vector<vector<char>> &arr , vector<vector<bool>> &vis , int n , int m  , bool first = false){
void run(int i , int j , vector<vector<char>> &arr , vector<vector<bool>> &vis){
    // if (! (i < 0 || j < 0 || i >= arr.size() || j >= arr[0].size())) {
    //     if (arr[i][j] == 'G')
    //         first = true;
    //     if (arr[i][j] == 'B')
    //         first = true;
    // }
    // if(!first){
    //     if( !check(i , j , arr ))
    //         return false; 
    // }

    // if( i == n && j == m)
    //     return true;

    if( i < 0 || j < 0 || i>= arr.size() || j >= arr[0].size() )
        return ;
    
    if(arr[i][j] == '#')    
        return;
        
    if(vis[i][j])
        return ;

    
    vis[i][j] = true;


    vis[i][j] = true;


    // sus |= run( i +1 , j , arr , vis , n  ,m ) ;
    // sus |= run( i -1 , j , arr , vis , n  ,m ) ;
    // sus |= run( i , j +1 , arr , vis , n  ,m ) ;
    // sus |= run( i , j -1 , arr , vis , n  ,m ) ;



    run( i +1 , j , arr , vis  ) ;
    run( i -1 , j , arr , vis  ) ;
    run( i , j +1 , arr , vis  ) ;
    run( i , j -1 , arr , vis  ) ;
    //return sus;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        
        int n ,m ;
        cin >> n >> m ; 

        vector<vector<char>> arr( n , vector<char>(m) );;;


        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> arr[i][j] ;
            }
        }


        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if( arr[i][j] == 'B'){
                    if( check(i +1 , j , arr))  
                        arr[i+1][j] = '#' ;
                    if( check(i , j  +1 , arr))  
                        arr[i][j+1] = '#' ;
                    if( check(i - 1 , j , arr))  
                        arr[i-1][j] = '#' ;
                    if( check(i  , j - 1 , arr))  
                        arr[i][j-1] = '#' ;
                } 
            }
        }
        bool sus = true;
        // for (int i = 0; i < n; i++) {
        //     for (int j = 0; j < m; j++) {
        //         if( arr[i][j] == 'G'){
        //             vector< vector<bool> > vis( n, vector<bool>(m , false)) ;
        //             bool check = run( i , j , arr , vis ,  n-1 , m-1 , true ) ;
        //             if(!check){
        //                 sus =  false;
        //                 break ;
        //             }
        //         }
        //     }
        //     if( !sus )
        //         break;
        // }

        // if(sus){
        //     for (int i = 0; i < n; i++) {
        //         for (int j = 0; j < m; j++) {
        //             if (arr[i][j] == 'B') {
        //                 vector<vector<bool>> vis(n, vector<bool>(m, false));
        //                 bool can = run(i, j, arr, vis, n - 1, m - 1);

        //                 if (can) {
        //                     sus = false;
        //                     break;
        //                 }
        //             }
        //         }
        //         if (!sus) break;
        //     }
        // }
        vector< vector<bool> > vis( n, vector<bool>(m , false)) ;
        run(n-1 , m-1 , arr , vis); 

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if(arr[i][j] == 'G' && !vis[i][j])
                    sus = false;
                if( arr[i][j] == 'B' && vis[i][j])
                    sus = false;
                if(!sus)
                    break;
            }
            if(!sus)
                break;
        }
    

        if(sus) 
            cout << "YES" << '\n' ;
        else
            cout << "NO" << '\n' ;

        
    }

    return 0;
}