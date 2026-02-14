/* 
                بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ   
    In the name of Allah, the Most Gracious, the Most Merciful.
*/
#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s ;
        cin >> s;
        
        s = '1' + s + '1';
        int ans = 0;
        for (int i = 1, l = 0; i <= n; ++i) {
            if (s[i] == '0') {
                if (s[i-1] == '1') {
                    l = i;
                }
                if (s[i+1] == '1') {
                    int c = (l == 1) + (i == n);
                    ans += (i - l + 1 + c) / 3;
                }
            } else {
                ans++;
            }
        }
        cout << ans << '\n';

    }

    return 0;
}
/*
1   0
2   0
3   1
4   1
5   2
6   2
7
8
*/