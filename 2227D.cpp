/* 
                بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ   
    In the name of Allah, the Most Gracious, the Most Merciful.
*/
/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ   
    In the name of Allah, the Most Gracious, the Most Merciful.
*/
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int find(int l, int r, vector<int> &arr, int sz) {

    
    while (l >= 0 && r < sz && arr[l] == arr[r]) {
        l--;
        r++;
    }
    l++;
    r--;
    
    
    if (l > r) 
        return 0; 
    
    vector<int> freq(sz + 1, 0); 
    for (int i = l; i <= r; i++) {
        freq[arr[i]]++;
    }
    
    int mex = 0;
    
    while (mex < sz && freq[mex] != 0) {
        mex++;
    }

    return mex; 
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> arr(2 * n);
        int x = -1, y = -1; 

        for (int i = 0; i < 2 * n; i++) {
            cin >> arr[i];
            if (arr[i] == 0) {
                if (x == -1)
                    x = i;
                else
                    y = i;
            }
        }

        int ans = 1; 

        ans = max(ans, find(x, x, arr, 2 * n));
        
        ans = max(ans, find(y, y, arr, 2 * n));
        
        int ei = (x + y) / 2;
        int sha = (x + y + 1) / 2;
        ans = max(ans, find(ei, sha, arr, 2 * n));

        cout << ans << '\n';
    }

    return 0;
}