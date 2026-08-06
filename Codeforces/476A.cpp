/* 
                بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ   
    In the name of Allah, the Most Gracious, the Most Merciful.
*/
#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n , m  ;
    cin >> n >> m;
    
    // x +2y = n
    // x + y = k*m
    // y = n- k*m
    // x = n - 2*y
    // x = n - 2(n-k*m)
    // x = n- 2n +2km
    // x = 2km - n

    //  x = 2km -n
    //  y = n - km
    for (int i = (n+1)/2; i <= n; i++){
        if(i%m == 0){
            cout << i << '\n';
            return 0 ;
        }
        
    }
    cout << -1 << '\n' ;
    

    return 0;
}