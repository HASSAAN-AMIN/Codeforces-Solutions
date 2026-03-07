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
        vector<int> arr(n);
        vector<int> brr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i]  ;
        }
        for (int i = 0; i < n; i++) {
            cin >> brr[i] ;
        }
        vector<pair<int ,int>> ans ;

        for (int i = 0; i < n; i++) {
            for (int j = 1; j < n; j++) {
                if(arr[j] < arr[j-1]){
                    swap(arr[j] , arr[j-1]);
                    ans.push_back( {1, j});
                }
            }
        }
        for (int i = 0; i < n; i++) {
            for (int j = 1; j < n; j++) {
                if(brr[j] < brr[j-1]){
                    swap(brr[j] , brr[j-1]);
                    ans.push_back( {2, j});
                }
            }
        }
        for (int i = 0; i < n; i++) {
            if(arr[i] > brr[i] )
                ans.push_back( {3  , i+1});
        }
        cout << ans.size() << '\n' ;
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i].first  << ' ' << ans[i].second << '\n' ;
        }
        
    }

    return 0;
}