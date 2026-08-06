/* 
                بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ   
    In the name of Allah, the Most Gracious, the Most Merciful.
*/
#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // int t;
    // cin >> t;
    // while(t--){
    //     int n;
    //     cin >> n;
    //     cout << n << '\n' ;
        
    // }

    int a , b ;
    cin >> a >> b ;

    int ans = 0 ;
    if(a == 1 && b ==1){
        cout << 0 << '\n' ;
        return 0 ;
    }
    while( a >0 && b > 0){
        ans++;
        if(a >=b ){
            a -= 2;
            b++;
        }else{
            a++;
            b-=2;
        }
    }
    cout << ans << '\n' ;

    return 0;
}

