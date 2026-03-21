/* 
                بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ   
    In the name of Allah, the Most Gracious, the Most Merciful.
*/
#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a , b; 
    cin >> a >> b;

    
    int ans = 0;
    while (a <= b) {
        a *= 3; 
        b *= 2; 
        ans++;
    }

    cout << ans << '\n';
    return 0;
}