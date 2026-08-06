/* 
                بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ   
    In the name of Allah, the Most Gracious, the Most Merciful.
*/
#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;


bool foo( int m , vector<int>& arr , int k , int n  ){

    long long cnt = 0 ;

    for (int i = n/2   ; i < n ; i++) {
        if( arr[i] < m){
            cnt += m-arr[i] ;
        }

    }
    if(cnt > k)
        return false;
    
    return true;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    int n  ,k ;
    cin >>  n>>  k ;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort( arr.begin() , arr.end() ) ;

    int l =  1 ;
    int r = arr[n/2] + k;

    while( l != r ){
        int m = l + (r-l +1 )/2 ;

        if( foo(m , arr, k , n)){
            l = m;
        }else{
            r =m-1 ;
        }
    }
    cout << l << '\n';




    

    return 0;
}