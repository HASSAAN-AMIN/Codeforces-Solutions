/* 
                بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ   
    In the name of Allah, the Most Gracious, the Most Merciful.
*/
#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool foo( int k , vector<pair<int , int>>& arr , int n ){

    int  l =0 ;
    int  r = 0;


    for (int i = 0; i < n; i++) {

        l = max( l -k , arr[i].first ); 
        r = min( r + k , arr[i].second );

        if( l > r )
            return false;

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

        vector<pair<int , int>> arr(n);

        for (int i = 0; i < n; i++) {
            cin >> arr[i].first >> arr[i].second; 
        }



        int l  = 0;
        int r  = 1e9 ; 
        
        
        while( l != r ){
            int mid = l + (r-l)/2 ;

            if( foo( mid , arr  , n )){
                r = mid; 
            }else{
                l = mid +1  ;
            }
        }

        cout << l <<  '\n'  ;

        
    }

    return 0;
} 