/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ   
    In the name of Allah, the Most Gracious, the Most Merciful.
*/
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    // Fast I/O
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    if (cin >> t) {
        while(t--){
            int n;
            cin >> n;
            vector<int> arr(n);
            vector<int> brr(n);
            for (int i = 0; i < n; i++) {
                cin >> arr[i];
            }
            for (int i = 0; i < n; i++) {
                cin >> brr[i];
            }
            
            //vector<int> crr = arr; 
            vector<int> crr = arr; 
            
            sort(arr.begin(), arr.end());
            bool sus = false; 
            for (int i = 0; i < n; i++) {
                if(arr[i] > brr[i]) {
                    sus = true;
                    break;
                }
            }
            
            if(sus){
                cout << -1 << '\n';
                continue;
            }

            vector<bool> done(n, false); 
            vector<int> p(n);           

            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    if (!done[j] && crr[i] <= brr[j]) {
                        p[i] = j;         
                        done[j] = true;   
                        break;            
                    }
                }
            }
            
            long long cnt = 0;
            for (int i = 0; i < n; i++) {
                for (int j = i + 1; j < n; j++) {
                    if (p[i] > p[j]) {
                        cnt++;
                    }
                }
            }
            
            cout << cnt << '\n';
        }
    }

    return 0;
}