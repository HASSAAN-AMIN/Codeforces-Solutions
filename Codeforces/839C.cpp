/* 
                بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ   
    In the name of Allah, the Most Gracious, the Most Merciful.
*/
#include <iostream>
#include<vector>
#include<algorithm>
#include <iomanip>

using namespace std;

double dfs( int u , int p , vector<vector<int>> &arr){
    double ans = 0 ;
    
    for( int v : arr[u]){
        if( v != p)
            ans +=  dfs( v, u , arr ) +1;
    }

    if(ans == 0)
        return 0;

    ans /= (arr[u].size()- ( p!= -1)) ; 
    return ans ;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n ;
    cin >> n;

    vector<vector<int>> arr( n );


    for (int i = 0; i < n-1; i++) {
        int x , y; 
        cin >> x >> y ;
        x-- ;
        y-- ;
        arr[x].push_back(y);
        arr[y].push_back(x);
    }
    double ans = dfs( 0 , - 1 ,  arr);

    cout << setprecision(100) <<  ans  << '\n' ;




    return 0;
}