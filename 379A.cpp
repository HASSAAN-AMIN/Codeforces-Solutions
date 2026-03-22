/* 
                بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ   
    In the name of Allah, the Most Gracious, the Most Merciful.
*/
#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a , b ;
    cin >> a >> b ;
    int t = b;

    int ans = a; 
    int crnt = a;  

    while (crnt >= b) {
        ans += crnt / b;
        crnt = (crnt % b) + crnt / b;
    }

    cout << ans << '\n';

    return 0;
}



