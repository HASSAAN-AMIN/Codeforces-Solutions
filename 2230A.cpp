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
        long long n , a , b ;
        cin >> n >> a >> b ;

        cout << ((a <= b/3) ? (a*n) : ((n/3)*b + min(b, a*(n%3)))) << '\n';

    }

    return 0;
}