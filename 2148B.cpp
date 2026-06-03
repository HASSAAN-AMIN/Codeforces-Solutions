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
        int n , m , x, y;
        cin >> n >> m >> x >> y;
        
        for (int i = 0; i <n+m; i++) {
            cin >> x ;
        }
        cout << n + m << '\n'; 
        
    }

    return 0;
}