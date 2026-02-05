/* 
                بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ   
    In the name of Allah, the Most Gracious, the Most Merciful.
*/
#include <iostream>
#include<vector>

using namespace std;
bool has_zero(vector<int> arr , int l , int r ){
    for (int i = l; i < r; i++) {
        if(arr[i] == 0)
            return true;
    }
    return false;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        
        int n;
        cin >> n;
        vector<int> a(n);

        for (int &x : a) 
            cin >> x;

        vector<pair<int,int>> ops;

        int mid = n / 2;
        int r = n;

        if (has_zero(a, mid, n)) {
            ops.push_back({mid + 1, n});
            r -= (n - mid - 1);
        }

        if (has_zero(a, 0, mid)) {
            ops.push_back({1, mid});
            r -= (mid - 1);
        }

        ops.push_back({1, r});

        cout << ops.size() << '\n';
        for (auto &p : ops) {
            cout << p.first << ' ' << p.second << '\n';
        }
    }

    return 0;
}