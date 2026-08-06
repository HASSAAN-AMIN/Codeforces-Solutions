/* 
                بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ   
    In the name of Allah, the Most Gracious, the Most Merciful.
*/
#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;
void fill( int i , int j , vector<vector<char>> &arr){
    if(i < 0 || j < 0 || i >= arr.size()  || j >= arr[i].size() || arr[i][j] == '#')
        return;

        arr[i][j] = '#' ;

        fill(i +1  , j , arr ) ;
        fill(i -1  , j , arr ) ;
        fill(i   , j+1 , arr ) ;
        fill(i   , j-1 , arr ) ;

}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n , m;
    cin >> n >> m ;

    vector<vector<char>> arr(n , vector<char>(m)) ;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j] ;
        }
    }


    int ans = 0 ;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if(arr[i][j] == '.' ){
                ans++ ; 
                fill( i , j , arr);
            }
        }
    }

    cout << ans << '\n' ;


    return 0;
}