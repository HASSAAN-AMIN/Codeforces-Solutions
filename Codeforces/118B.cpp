/* 
                بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ   
    In the name of Allah, the Most Gracious, the Most Merciful.
*/
#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n ;
    cin >> n ;
    //       0
    //     0 1 0
    //   0 1 2 1 0
    // 0 1 2 3 2 1 0
    //   0 1 2 1 0
    //     0 1 0
    //       0
    for (int i = -n; i <= n; i++) {    
        for (int j = -n; j <= n; j++) {
            if ((n - (abs(i) + abs(j))) >= 0) {
                cout << (n - (abs(i) + abs(j)));
                if (j < (n - abs(i))) {
                    cout << ' ';
                } else {
                    break; 
                }
            } else {
                cout << "  "; 
            }
        }
        cout << '\n';
    }

    return 0;
}