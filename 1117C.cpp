/* 
                بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ   
    In the name of Allah, the Most Gracious, the Most Merciful.
*/
#include <iostream>
#include <climits>

using namespace std;

bool checky( long long sx , long long sy , long long ex , long long ey  , string s , long long t){

    long long wx = 0 ; 
    long long wy = 0 ;

    for( char c : s){
        switch(c){
            case 'U' : 
                wy++ ;
                break ;

            case 'D':
                wy-- ;
                break;
            
            case 'L':
                wx--;
                break;
            case 'R':
                wx++;
        }
    }

    wx *= t/s.size() ;
    wy *= t/s.size() ;

    long long r  =  t % (s.size()) ;

    for (long long i = 0; i < r; i++) {
        switch(s[i]){
            case 'U' : 
                wy++ ;
                break ;

            case 'D':
                wy-- ;
                break;
            
            case 'L':
                wx--;
                break;
            case 'R':
                wx++;
        }
    }

    //  cout << "come \n" ;
    sx += wx; 
    sy += wy ; 

    return abs(sx - ex) + abs(sy - ey) <= t;

}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long sx, sy ,ex ,ey ;

    cin >> sx >> sy >> ex >> ey ;

    int n ; 
    cin >> n; 
    
    string s;
    cin >> s ;


    long long ans = -1 ;




    // for (long long i = 1; i <  2147483647; i++) {
        
    //     if( checky( sx , sy  ,ex ,ey , s , i)){
    //         cout << i << '\n' ;
    //         return 0 ;
    //     }
    // }

    // bianry SEARCH 

    long long  l = 1 ; 
    long long  r =  1e18 ;


    while( l <= r){

        long long mid = l + ( r-l)/2  ;


        if( checky( sx , sy  ,ex ,ey , s , mid)){
            ans  = mid ;
            r = mid-1;
        }else{
            l = mid+1;
        }

    }



    cout << ans << '\n' ;



    return 0;
}