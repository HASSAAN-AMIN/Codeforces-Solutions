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

    int n, s, t;
    cin >> n >> s >> t;

    vector<int> arr(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }

    if (s == t) {
        cout << 0 << '\n';
        return 0;
    }

    int crnt = s;
    int cnt = 0;

    

    while (true) {
        crnt = arr[crnt]; 
        cnt++;
        if (crnt == t) {
            cout << cnt << '\n';
            return 0;
        }
        if (crnt == s) {
            cout << -1 << '\n';
            return 0;
        }
    }

    return 0;
}