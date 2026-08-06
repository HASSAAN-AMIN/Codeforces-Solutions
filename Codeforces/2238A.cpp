/*  
                بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ   
    In the name of Allah, the Most Gracious, the Most Merciful.
*/
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, c;
        cin >> n >> c;

        vector<int> arr(n);
        vector<int> brr(n);

        for (int i = 0; i < n; i++)
            cin >> arr[i];

        for (int i = 0; i < n; i++)
            cin >> brr[i];

        int p = 0;
        bool sus = true;

        for (int i = 0; i < n; i++) {
            if (arr[i] < brr[i]) {
                sus = false;
                break;
            }
            p += arr[i] - brr[i];
        }

        sort(arr.begin(), arr.end());
        sort(brr.begin(), brr.end());

        int q = c;
        bool pus = true;

        for (int i = 0; i < n; i++) {
            if (arr[i] < brr[i]) {
                pus = false;
                break;
            }
            q += arr[i] - brr[i];
        }

        if (!sus && !pus)
            cout << -1 << '\n';
        else if (sus && pus)
            cout << min(p, q) << '\n';
        else if (sus)
            cout << p << '\n';
        else
            cout << q << '\n';
    }

    return 0;
}