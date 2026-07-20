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

        vector<int> a(n), b(n);

        for (int i = 0; i < n; i++)
            cin >> a[i];

        for (int i = 0; i < n; i++)
            cin >> b[i];

        int f = 0, s = 0;
        int plus = 0, minus = 0;

        for (int i = 0; i < n; i++) {
            if (a[i] == 1 && b[i] == 1) 
                plus++;
            else if (a[i] == -1 && b[i] == -1) 
                minus++;
            else if (a[i] > b[i] && a[i] == 1) 
                f++;
            else if (b[i] > a[i]  && b[i] == 1)
                s++;
        }


        int use = min(plus, abs(f - s));
        if (f < s) 
            f += use;
        else 
            s += use;
    
        plus -= use;

        f += plus / 2;
        s += (plus + 1) / 2;


        use = min(minus, abs(f - s));
        if (f > s) 
            f -= use;
        else 
            s -= use;
        minus -= use;

        f -= minus / 2;
        s -= (minus + 1) / 2;

        cout << min(f, s) << '\n';
    
    }

    return 0;
}