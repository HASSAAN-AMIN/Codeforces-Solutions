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

        string s;
        cin >> s;;
        
        int cnt = 0;

        for (int i = 0; i < n; i++) {

            cnt++;

            int j = i + 1;

            while (j < n && s[j] == s[i])
                j++;

            i = j - 1;
        }

        int ans = cnt;

        for (int i = 1; i < n - 1; i++) {

            int p = cnt;

            if (s[i] != s[i - 1] && s[i] != s[i + 1])
                p--;

            if (s[i - 1] == s[i + 1] && s[i] != s[i - 1])
                p--;

            ans = min(ans, p);
        }

        cout << ans << '\n';
        
    }

    return 0;
}