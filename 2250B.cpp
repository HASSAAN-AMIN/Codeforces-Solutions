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

        int n  ;
        int k ;
        cin >> n >> k ;

        // half 0
        // half 1

        // k times  i , i +1 are same
        // 0000111110101010
        // ah string?
        

        if (k == n - 1) {
            cout << -1 << '\n';
            continue;
        }

        int tot = n - k;     

        int c0 = (n + 1) / 2;  

        int c1 = n / 2;                

        int z = (tot + 1) / 2;    
        
        int o = tot / 2;                 

        vector<int> arr(tot, 1);     
            
        arr[0] += c0 - z;              
        arr[1] += c1 - o;              

        string ans;
        for (int i = 0; i < tot; i++) {
            while( arr[i]--)
                ans += (i%2) + '0';
        }
        cout << ans << '\n';
        
    }

    return 0;
}