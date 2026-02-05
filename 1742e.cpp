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
        int n , q;
        cin >> n >> q;
        vector<long long> arr(n);
        cin >> arr[0] ;
        for (int i = 1; i < n; i++) {
            cin >> arr[i] ;
            arr[i] += arr[i-1];
        }
        int x;
        while(q--){
            cin >> x;

            int l = 0 ;
            int r = arr.size()- 1;
            int mid = (l+r)/2 ;
            
        }

        
    }

    return 0;
}