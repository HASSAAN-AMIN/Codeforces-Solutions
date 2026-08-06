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
        int n, x, y;
        cin >> n >> x >> y;


        bool sus = true;
        vector<int> arr(n + 1);
        for (int i = 1; i <= n; i++) 
            cin >> arr[i];

        int gc = __gcd(x, y);   
    

        for (int i = 1; i <= n; i++) {
            if (i % gc != arr[i] % gc) {
                sus = false;
                break;
            }
        }
        if( sus )
            cout << "YES" << '\n' ;
        else
            cout << "NO" << '\n' ;
            
    }

    return 0;
}