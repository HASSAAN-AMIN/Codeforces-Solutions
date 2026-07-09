/* 
                بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ   
    In the name of Allah, the Most Gracious, the Most Merciful.
*/
#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool foo( int k , vector<int> &arr, int n){

    long long  x  = arr[k]; 
    for (int i = 0; i < n; i++) {
        if( i == k )
            continue; 

        if( arr[i]  > x)
            return false;
        
        x += arr[i] ;
    }
    return true;


}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        vector<int> arr(n);

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        vector<int> brr = arr ;

        sort( arr.begin() , arr.end() ) ;

        int l = 0 ; 
        int r = n-1 ;
        int mid = l + (r-l)/2 ;
        while( l  < r  ){
            mid = l + (r-l)/2 ; 
            if( foo(mid , arr , n) ){
                r = mid;
            }else{
                l = mid+1 ;
            }
        }

        int num = arr[l] ; 

        int cnt  = 0 ;
        for (int i = 0; i < n; i++) {
            if( brr[i] >=  num)
                cnt++;
        }
        cout << cnt << '\n';
        for (int i = 0; i < n; i++) {
            if( brr[i] >= num )
                cout << i+1 << ' '; 
        }
        cout << '\n' ;
        

    }   

    return 0;
}