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
        int q ;
        cin >> q ;

        vector<int> arr(n);

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        vector<long long> sum( n+1  ,  0) ; 
        vector<long long> xorr( n+1  ,  0) ; 

        for (int i = 1; i <= n; i++) {
            sum[i] = sum[i-1] + arr[i-1] ;
            xorr[i] = xorr[i-1] ^ arr[i-1] ;
        }

        int l , r;
        while(q--){

            cin >> l >> r ;
            // l = 1 
            // r = n 

            long long crnt = (sum[r]) - xorr[r] ;


            int ans = n;

            int ll = 1;
            int rr = n;

            int lo = 1;
            int hi = n;

            while (lo <= hi) {

                int m = lo + (hi - lo) / 2;

                bool sus = false;

                int L = -1, R = -1;

                for (int i = 1; i + m - 1 <= n; i++) {

                    int j = i + m - 1;

                    long long now = (sum[j] - sum[i-1]) - (xorr[j] ^ xorr[i-1]);

                    if (now == crnt) {
                        sus = true;
                        L = i;
                        R = j;
                        break;
                    }
                }

                if (sus) {
                    ans = m;
                    ll = L;
                    rr = R;
                    hi = m - 1;
                }
                else {
                    lo = m + 1;
                }
            }

            cout << ll << " " << rr << '\n';




        }
        
    }

    return 0;
}