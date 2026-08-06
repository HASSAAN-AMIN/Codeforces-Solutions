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
        vector<long long> arr(n) ;
        for (int i = 0; i < n; i++) {
            cin >> arr[i] ;
        }

        for (int i = n-2; i >= 0; i--) {
            if(arr[i] <= arr[i+1])
                arr[i] = arr[i+1]+1 ;
        }

        cout << arr[0] << '\n' ;


    }

    return 0;
}