/* 
                بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ   
    In the name of Allah, the Most Gracious, the Most Merciful.
*/
#include <iostream>
#include <numeric> 
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long w, h, d, n;
    cin >> w >> h >> d;
    cin >> n;

    long long a = gcd(n, w);
    n /= a; 
    long long b = gcd(n, h);
    n /= b; 
    long long c = gcd(n, d);
    n /= c; 
    if (n == 1) {
        cout << a - 1 << " " << b - 1 << " " << c - 1 << endl;
    } else {
        cout << -1 << endl;
    }

    return 0;
}