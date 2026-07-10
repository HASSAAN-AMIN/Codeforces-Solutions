/* 
                بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ   
    In the name of Allah, the Most Gracious, the Most Merciful.
*/
#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;


bool  foo( long long m , vector<int> &arr , vector<int> &brr , int k , int n ){
    
    long long x = 0 ;

    for (int i = 0; i < n; i++) {
        x += max( 0ll , arr[i]*m - brr[i]) ;


        if( x > k)
            return false;
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



    long long l = 0 ; 
    long long r = 2*1e9 ;
    
    while( l !=  r ){

        long long mid = l + (r-l +1)/2 ;

        if( !foo( mid , arr , brr , k , n )){
            r = mid  -1 ;
        }else{
            l = mid  ;
        }
    }

    cout <<  l << '\n' ;

    return 0;
}