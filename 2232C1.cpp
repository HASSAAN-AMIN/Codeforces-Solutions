/* 
                بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ   
    In the name of Allah, the Most Gracious, the Most Merciful.
*/
#include <iostream>
#include<vector>
#include<algorithm>

#include <string>


using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n , x ,s ;
        cin >> n >> x >> s ; 
        string arr ;
        cin >> arr;


        int ans  = 0 ;
        long long cnt =  0 ;
        int sus =  0 ; 

        for ( char c : arr ){
            if( c == 'I'){
                if(x > 0){
                    ans++;
                    x-- ;
                    cnt += s-1 ;
                }else   
                    continue;
            }if( c ==  'E'){
                if( cnt >  0){
                    cnt-- ;
                    ans++;
                }else if( x > 0 && sus > 0  ){
                    // if table iz
                    // shift ambi to new 
                    ans++;
                    cnt += s-1 ;
                    sus-- ;
                    x-- ;
                }
            }if( c == 'A'){
                if( cnt > 0  ){
                    cnt-- ; 
                    ans++;
                    sus++;
                }else if( x >  0 ){
                    x-- ;
                    cnt += s-1 ;
                    ans++; 
                }else{
                    continue;
                }
            }
        }


        cout << ans << '\n' ;
    }

    return 0;
}