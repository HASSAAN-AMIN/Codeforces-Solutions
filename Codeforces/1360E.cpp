/* 
                بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ   
    In the name of Allah, the Most Gracious, the Most Merciful.
*/
#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;

void dfs( int i , int  j , vector<vector<int> > &arr , vector< vector<bool> > &vis ){

    if( i < 0 || j < 0)
        return ;
    if(vis[i][j])
        return ;
    if( arr[i][j] == 0)
        return;
    // cout << "here : " << " i , j ( " << i << ',' << j << ") \n" ;
    // cout << "arr[i][j] : " << arr[i][j] << '\n' ;
    vis[i][j] = true;
    arr[i][j] = 2 ;

    dfs( i-1 , j , arr , vis);
    dfs( i, j-1 , arr, vis) ;
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        vector<vector<int> > arr(  n ,  vector<int>(n));


        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                char c ;
                cin >> c ;
                arr[i][j] = ( c == '0' )? 0 : 1;
            }
        }
        // vector<vector<int> >  brr = arr ;

        // i have a better idea ig
        // lets just dfs
        
        vector<vector<bool> > vis(  n ,  vector<bool>(n , false));
        for (int i = 0; i < n; i++) {
            if( arr[i][n-1] == 1)  
                dfs( i , n-1 , arr , vis) ;
        }
        for (int i = 0; i < n; i++) {
            if( arr[n-1][i] == 1)  
                dfs( n-1 , i , arr , vis) ;
        }

        // // 2
        // // 10
        // // 01
        // for (int i = 0; i < n; i++) {
        //     if(arr[i][n-1] == 1){
        //         for (int j = n-1; j>=0 ; j--) {
        //             if( arr[i][j] == 1)
        //                 arr[i][j] = 0;
        //             else
        //                 break;
        //         }
        //     }
        // }

        // // same for cols
        // for (int i = 0; i < n; i++) {
        //     if(brr[n-1][i] == 1){
        //         for (int j = n-1; j>=0 ; j--) {
        //             if( brr[j][i] == 1)
        //                 brr[j][i] = 0;
        //             else
        //                 break;
        //         }
        //     }
        // }
        
        bool sus = false ;


        // for (int i = 0; i < n; i++) {
        //     for (int j = 0; j < n; j++) {
        //         cout << arr[i][j] << ' ' ;
        //     }
        //     cout << '\n' ;
        // }


        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if( arr[i][j] == 1 ){
                    sus = true;
                    break;
                }
            }
        }
        if(sus){
            cout << "NO" << '\n' ;
        }else{
            cout << "YES" << '\n' ;
        }

        
    }

    return 0;
}
