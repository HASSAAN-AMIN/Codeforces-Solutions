/* 
                بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ   
    In the name of Allah, the Most Gracious, the Most Merciful.
*/
#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;


bool  foo( int m , vector<int> &arr , vector<int> &brr , int k , int n ){
    
    int x = 0 ;

    for (int i = 0; i < n; i++) {
        x += max( 0 , arr[i]*m - brr[i]) ;
    }

    return x <= k ; 


}



int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int  n , k ; 
    cin >> n >> k  ;
    

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    vector<int> brr(n);
    for (int i = 0; i < n; i++) {
        cin >> brr[i];
    }



    int l = 0 ; 
    int r = 2000 ;
    
    while( l !=  r ){

        int mid = l + (r-l +1)/2 ;

        if( !foo( mid , arr , brr , k , n )){
            r = mid  -1 ;
        }else{
            l = mid  ;
        }
    }

    cout <<  l << '\n' ;

    return 0;
}