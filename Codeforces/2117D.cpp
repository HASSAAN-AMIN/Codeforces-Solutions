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
        vector<int> arr(n) ;
        for (int i = 0; i < n; i++) {
            cin >> arr[i] ;
        }
        int y = (2 * arr[0] - arr[1]) / (n + 1);
        int x = arr[1] - arr[0] + y;


        if(y  < 0 ||  x <  0) {
            cout <<  "NO" << '\n';
            continue;
        }
        for (int i = 0; i < n; i++) {
            arr[i] -= x * (i + 1);
            arr[i] -= y * (n - i);
        }
        bool sus  = false;
        for (int i = 0; i < n; i++) {
            if(arr[i] != 0 ){
                sus = true;
                break;
            }
        }
        if(sus)
            cout << "NO" << '\n' ;
        else
            cout << "YES" << '\n' ;
    }

    return 0;
}