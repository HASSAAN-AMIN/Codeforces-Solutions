/* 
                بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ   
    In the name of Allah, the Most Gracious, the Most Merciful.
*/
#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;


int process( int x , int  y ){

    int a ;
    cout << "and " << x  << ' ' << y  << '\n'  ;
    cin >> a;
    int b ;
    cout << "or " << x <<  ' ' << y << '\n' ;
    cin >> b; 

    return 2*a + ( (~a) & b) ;

}

int main() {
    // ios::sync_with_stdio(false);
    // cin.tie(nullptr);

    int n ;
    int k ;
    cin >> n >> k  ;

    // who made this 1800 lol

    int a = process(1  , 2 );
    int b = process(2  , 3 );
    int c = process(1  , 3 );

    vector<int> arr(n) ;


    arr[0] =  ( a + c - b) /2 ;
    arr[2] =  c - arr[0] ;
    arr[1] =  b - arr[2] ; 

    for (int i = 3; i < n; i++) {
        arr[i] = process( 1 , i + 1) - arr[0];
    }

    sort( arr.begin() , arr.end()) ;

    cout << "finish " ;
    cout << arr[k-1] << '\n';


    return 0;
}