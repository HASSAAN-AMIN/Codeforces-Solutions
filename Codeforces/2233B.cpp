/* 
                بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ   
    In the name of Allah, the Most Gracious, the Most Merciful.
*/
#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        

        if (n == 2) {
            cout << "1 2 1 1 2 2 1 2\n";
        } else {
            for (int i = 1; i < n +1; i++) {
                cout << i << ' ';
            }
            for (int i = 1; i < n +1; i++) {
                cout << i << ' ';
            }
            for (int i = 2; i < n +1; i++) {
                cout << i << ' ';
            }
            cout << 1 <<' ';
            for (int i = 4; i < n +1 ; i++) {
                cout << i << ' ';
            }
            if (n >= 3) 
                cout << "1 2 3";
            cout << '\n';
        }

        // difference
        //  a     b         c   d
        //    n     n+1{1}
        
    }

    return 0;
}
