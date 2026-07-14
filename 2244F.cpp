/* 
                بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ   
    In the name of Allah, the Most Gracious, the Most Merciful.
*/
#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;

pair<int , int > dfs( int  v , vector<vector<int>>& arr , vector<int> &vals , bool &sus){

    // base case also
    if( sus == false)
        return {0 , 0 } ;

    // base case 
    if( vals[v] != 0 )
        return { vals[v] , vals[v]} ;

    vector<pair<int,int>> pishus;

    
    for( int x  : arr[v] ){
        // recursive casee here
        pishus.push_back( dfs( x , arr , vals , sus)) ;
    }
    if( sus == false){
        return { 0 ,0 };
    }

    vector<pair<int,int>> sorted = pishus ;

    sort( sorted.begin() , sorted.end()) ;

    // check if it is reallly possbile ?
    for (int i = 0; i < pishus.size() - 1; i++) {
        if( sorted[i].second != sorted[i+1].first - 1 ){
            sus = false;
            return {0 , 0 } ;
        }
    }


    // find where to start real check  ??
    // the cycle one
    // coz we cant just sort 

    int idx = - 1 ;
    for (int i = 0; i < pishus.size() ; i++) {
        if( pishus[i].first == sorted[0].first)
            idx= i ;
    }


    // now check
    // for n size cycles are also n

    for (int i = 0; i < pishus.size(); i++) {
        if( pishus[(i +idx)%pishus.size()] != sorted[i]){
            sus = false;
            return { 0 , 0} ;
        }
    }   
    //else we good

    return { sorted[0].first  , sorted[sorted.size() -1 ].second} ; //send min max 


}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        
        int n ;
        cin >> n; 
        
        vector<  vector<int> > arr( n+1 ) ;

        for (int i = 2; i < n +1; i++) {
            int x ;
            cin >> x ;
            arr[x].push_back(i) ;
        }

        vector< int > vals( n +1    ) ;

        int big = -1 ; 
        for (int i = 0; i < n ; i++) {
            cin >> vals[i+1] ;
            big = max( big , vals[i+1]) ;
        } 

        bool sus = true ;

        pair<int , int > checky = dfs( 1 , arr ,vals , sus ); 

        if( sus && checky.first == 1 && checky.second == big ){
            cout << "YES" << '\n' ;
        }else{
            cout << "NO" << '\n' ;
        }

        // cout << sus << '\n' ;
        // cout << checky.first << '\n' ;
        // cout << big  << '\n' ;

        // cout << checky.second << '\n' ;


        // cout << '\n'  << '\n' ;

    }

    return 0;
} 