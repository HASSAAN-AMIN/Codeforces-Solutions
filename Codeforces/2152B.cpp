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
        int  n ,x1 ,x2 , y1 ,y2;
        cin >> n >> x1 >> y1 >> x2 >> y2 ;

        int ans  = 0 ;
        if(x2 > x1)
            ans = max( ans ,  x2);
        else if(x1 > x2)
            ans = max(ans , n -x2 );
        if(y2 > y1)
            ans = max( ans ,  y2);
        else if(y1 > y2)
            ans = max(ans , n -y2 );
        
        cout << ans << '\n' ;
    }

    return 0;
}   