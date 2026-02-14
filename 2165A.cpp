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
        vector<long long> eish(n+1);
        long long missu = -1;
        for (int i = 0; i < n; i++) {
            cin >> eish[i] ;
            missu = max(missu , eish[i]) ;
        }
        eish[n] = eish[0]; 

        missu = -missu;
        for (int i = 0; i < n; i++) {
            missu += max(eish[i] , eish[i+1]);
        }
        cout << missu << '\n' ;
    }

    return 0;
}