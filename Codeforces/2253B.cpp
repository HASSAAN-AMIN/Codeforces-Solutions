/* 
                بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ   
    In the name of Allah, the Most Gracious, the Most Merciful.
*/
#include <iostream>
#include<vector>
#include<algorithm>
#include <unordered_map>
#include <set>


using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        
        int n;
        cin >> n;
        
        vector<int> arr(n);
        vector<int> take;
        vector<int> no;

        for (int i = 0; i < n; i++) {
            cin >> arr[i];

            if (i == 0 || take.back() != arr[i]) {
                take.push_back(arr[i]);
                no.push_back(1);
            } else {
                no[no.size()-1]++; 
            }
        }

        int cnt = take.size();
        int ans = cnt;

    
        for (int i = 0; i < cnt - 1; i++) {
            if (no[i] >= 2 && no[i + 1] >= 2) {
                ans++;
                ans++;
                break;
            }
        }
        
        if (ans == cnt) {
            for (int i = 0; i < cnt; i++) {
                if (no[i] > 1) {
                    //right
                    if (i + 1 < cnt && (i + 2 == cnt || take[i + 2] != take[i])) {
                        ans = cnt + 1;
                        break;
                    }
                    //left
                    if (i > 0 && (i == 1 || take[i - 2] != take[i])) {
                        ans = cnt + 1;
                        break;
                    }
                }
            }
        }

        cout << ans << '\n';

    }

    return 0;
}