/* 
                بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ   
    In the name of Allah, the Most Gracious, the Most Merciful.
*/
#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string a , b ;
    cin >> a >> b ;

    if(a == b)
        cout << -1 << '\n' ;
    else
        cout << max( a.size() , b.size()) ;

    return 0;
}