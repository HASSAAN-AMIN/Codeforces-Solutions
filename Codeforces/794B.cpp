/* 
                بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ   
    In the name of Allah, the Most Gracious, the Most Merciful.
*/
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n , h ;
    cin >> n >> h ;

    cout << fixed << setprecision(12);
    for (int i = 1; i < n; i++) {
        double x = h * sqrt((double)i / n);
        cout << x << "\n";
    }

    return 0;
}