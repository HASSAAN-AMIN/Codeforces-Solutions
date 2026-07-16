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
        int c;
        cin >> n >> c;

        vector<int> arr;
        long long ans = 0 ;

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            ans += x-c;

            if (c - x > 0)
                arr.push_back(c-x);
        }

        int m =  arr.size() ;
        sort(arr.rbegin(), arr.rend());

    
        for (int i = 0; i <  min(m , n/2); i++) {
            ans += arr[i];
        }

        cout << ans << '\n';
        
        
    }

    return 0;
}
