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

    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int j = 0; j < (1 << n); j++) {
        int sum = 0;
        for (int i = 0; i < n; i++) {
            if (j & (1 << i))
                sum -= a[i];   
            else
                sum += a[i];   
        }
        if ((sum % 360 + 360) % 360 == 0) {
            cout << "YES" << '\n';
            return 0;
        }
    }

    cout << "NO\n";

    return 0;
}