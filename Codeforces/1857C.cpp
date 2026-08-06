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

        // n --> n(n-1)/2
        // 2 --> 1
        // 3 --> 3
        // f(x) = x(x-1)/2
        // x = { 1 + sqrt(8*f(x) +1 ) }/2 
        // nah random bs nvm 

        int m = (n*(n-1))/2 ;
        vector<long long> arr(m) ;
        for (int i = 0; i < m; i++) {
            cin >> arr[i] ;
        }

        sort(arr.begin() , arr.end()) ;
        
        for (int i = 0; i < m; ) {
            cout << arr[i] << ' ';
            n--;
            i += n;
        }

        cout << "1000000000\n" ;


    }

    return 0;
}