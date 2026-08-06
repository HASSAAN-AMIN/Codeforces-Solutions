/* 
                بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ   
    In the name of Allah, the Most Gracious, the Most Merciful.
*/
#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n ,m ;
    cin >> n >> m ;
    // the math >>>>
    cout << ((n/m)*(n/m -1ll ))/2ll*(m- n%m) + ((n/m +1ll )*(n/m))/2ll*(n%m) << ' ' << ((n-m+1ll)*(n-m))/2ll << '\n' ;

    return 0;
}