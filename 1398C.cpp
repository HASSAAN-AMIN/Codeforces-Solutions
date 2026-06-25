/* 
                بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ   
    In the name of Allah, the Most Gracious, the Most Merciful.
*/
#include <iostream>
#include<vector>
#include<algorithm>
#include <map>



using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n + 1);

        for (int i = 1; i <= n; i++) {
            char c;
            cin >> c;
            arr[i] = c - '0';
        }

        for (int i = 1; i <= n; i++) { 
                arr[i] += arr[i - 1]; 
        }

        map<int, long long> mapy;
        for (int i = 0; i <= n; i++) { 
            mapy[arr[i] - i]++; 
        }

        long long cnt = 0;
        for (const auto &[_, f] : mapy) {
            cnt += f * (f - 1) / 2;
        }

        cout << cnt << '\n';

    }

    return 0;
}