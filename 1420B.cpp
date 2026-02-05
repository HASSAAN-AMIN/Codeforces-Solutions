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
            cin >> arr[i]; 
        }
        long long ans = 0 ;
        for (int i = 29 ; i >= 0; i--) {
            int cnt = 0;

            // do smth

            for (int j = 0; j < n; j++) {
                
                if((arr[j] >= (1 << i) )&& ( arr[j] < (1 << (i+1)))){
                    cnt++;
                }

            }

            ans += cnt*(cnt-1)/2 ;
        }

        cout << ans << '\n' ;
        
    }

    return 0;
}