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
        int n,  k; 
        cin >> n >> k ; 

        vector<int> arr(n);

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        vector<int> brr; 
        for (int i = 0; i < n; i++) {
            int cnt = 1 ; 
            while(i < (n-1) && arr[i] == arr[i+1]){
                cnt++;
                i++;
            }

            brr.push_back(cnt);
        }
        
        // for (int i = 0; i < brr.size(); i++) {
        //     cout << brr[i] << '\n' ;
        // }
        sort(brr.begin(), brr.end());
        
        
        int m = brr.size();
        int ans = 0;
        

        for (int i = 0; i < brr.size(); i++) {
            
            if (i == 0 || brr[i] != brr[i-1]) {

                if ((k - n) % m == 0) {
                    if (((k - n) / m )>= (1 - brr[i])) {
                        ans++;
                    }
                }

            }

            n -= brr[i];

            m--;

        }
        
        cout << ans << '\n';
        
    }

    return 0;
}




// 10
// 1 5
// 1
// 4 5
// 1 1 2 2
// 3 1
// 1 1 1
// 4 8
// 1 2 3 4
// 8 6
// 1 1 1 2 2 2 2 2
// 6 3
// 1 1 2 2 3 3
// 10 7
// 1 1 1 2 2 3 3 3 3 4
// 12 5
// 1 1 1 1 2 2 2 3 3 4 4 4
// 6 5
// 1 1 2 2 3 3
// 3 1
// 1 2 2
