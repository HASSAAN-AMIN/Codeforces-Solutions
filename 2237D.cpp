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
        // vector<int> arr(n) ;
        // for (int i = 0; i < n; i++) {
        //     cin >> arr[i] ;
        // }
        // sort(arr.begin() , arr.end()) ;
        string s;
        cin >> s ;

        // 00 -> 1 
        // len -= 1 
        // ones += 1
        // ??

        //  len + ones = const 


        // 11 -> 0
        // len -= 1
        // zero += 1

        // len +zero  = const

        // zero + ones = a +b - 2(len)
        // 3 * len = sum of const

        // 11 -> 0
        // len -= 1
        // ones -= 2
        // len  + ones  =>  lens-1 + ones -2
        //              =?  lens + ones -3
        //  mod 3 remains same



        // ones + len (mod 3) remains same

        // should be preserved ?
        // 0 1 2 
        // 0 ? 
        // "0"  -> 1
        // "1"  -? 2

        //  1 or 2 

        // ans  = all - substr%3==0 ?
        // .    01 -> 3 -> 0 
        // .    10 -> 3 -> 0 
        // .    010  -> 4 -> 1 no
        // .    101  -> 5 -> 2 no
        // .    001 => 11 => 0 ez
        // .    1010 => 2 +4 = 6
        // .    3 + 6  
        // .       x +2x = 3x already filtered
        // .    so  overlap 
        //      only odd


        // ans =  all - substr%3==0 - alternate_odd?

        // didnt have a rough copy :<

        

        long long ans = 1LL * n * (n + 1) / 2;
    
        long long f[3] = {0, 0, 0};
        f[0] = 1; 
        int cur = 0;
        for (char c : s) {
            int  x  =  (c == '0' ? 1 : 2) ; 
            cur = (cur + x ) % 3;
            f[cur]++;
        }

        for (int i = 0; i < 3; i++) {
            ans -= (f[i] * (f[i] - 1)) / 2;
        }

        int len = 1;
        for (int i = 1; i <= n; i++) {
            if (i < n && s[i] != s[i - 1]) {
                len++;
            } else {
                if (len >= 3) {
                    long long k = len / 2;
                    ans -= (len % 2 != 0) ?(k * k) : (k*k-k*1ll)  ;
                }
                len = 1;
            }
        }

        cout << ans << '\n';

    }

    return 0;
}  