/* 
                بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ   
    In the name of Allah, the Most Gracious, the Most Merciful.
*/
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    char a , b, c ,d , e ;
    cin >> a >> b >> c >> d >> e ;

    int hh = (a - '0')*10 + (b - '0');
    int mm = (d - '0')*10 + (e - '0');
    cout << fixed << setprecision(10) << (hh % 12) * 30.0 + mm * 0.5 << " " << mm * 6.0 << "\n";

    return 0;
}