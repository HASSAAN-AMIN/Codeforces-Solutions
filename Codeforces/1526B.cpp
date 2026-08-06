/* 
                بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ   
    In the name of Allah, the Most Gracious, the Most Merciful.
*/
#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        
        int x ;
        cin >> x ;

        bool sus = true; 
        while( sus && x >= 0 ){
            if(x % 11  == 0)
                sus = false ;
            
            x -= 111  ;
        }
        if(sus)
            cout  << "NO" << '\n' ;
        else
            cout << "YES" << '\n' ;
        
    }

    return 0;
}