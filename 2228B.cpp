/* 
                بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ   
    In the name of Allah, the Most Gracious, the Most Merciful.
*/
#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n , a , b ,k;
        cin >> n >> a >> b >> k; 
        if( n < 3)
            cout << 1 << '\n';
        else
            cout << min( abs(a-b) , n -abs(a-b) ) + k  << '\n'  ; 

        
    }

    return 0;
}