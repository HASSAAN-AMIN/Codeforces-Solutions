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
        int x ,y ;
        cin >> x >> y ;
        if (x > y || (x == 0 && y % 2 == 0)) 
            cout << "NO" << '\n';
        else{
            int n = y-x;
            cout << "YES" << '\n' ;
            // even , odd
            // all odds are leaf

            // start with star graph
            int cnt =  1 ;
            if(n&1){
                for (int i = 2; i <= n; i++) {
                    cout << 1 << ' ' << i << '\n';
                }
                cnt = n ;
                for (int i = 0; i < x; i++) {
                    cout << 1 << ' ' << cnt +1 << '\n';
                    cout << cnt+1  << ' ' << cnt +2<< '\n' ;
                    cnt += 2 ;
                }
            }else{
                n += 2 ; 
                for (int i = 2; i <= n; i++) {
                    cout << 1 << ' ' << i << '\n';
                }
                cnt = n ;
                for (int i = 0; i < x -1; i++) {
                    cout << 1 << ' ' << cnt +1 << '\n';
                    cout << cnt+1  << ' ' << cnt +2 << '\n';
                    cnt += 2 ;
                }
            }
        }
        
    }

    return 0;
}