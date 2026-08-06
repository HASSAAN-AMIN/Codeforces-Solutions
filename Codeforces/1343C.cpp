/* 
                بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ   
    In the name of Allah, the Most Gracious, the Most Merciful.
*/
#include <iostream>
#include<vector>

using namespace std;
int sign(long long  x){
    if(x>0)
        return 1;
    return -1 ;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        // bool sus  = false;
        // int prev ;
        // cin >> prev ;
        // int cnt = 1 ;
        // for (int i = 1; i < n; i++) {
        //     int x ;
        //     cin >> x ;
        //     if(x%2 == prev%2){
        //         continue;
        //     }else{
        //         prev = x;
        //         cnt++;
        //     }
        // }
        // if(cnt != 1)
        //     cout << cnt << '\n';
        // else    
        //     cout << -1 << '\n' ;
        vector<long long> arr(n) ;
        for (int i = 0; i < n; i++) {
            cin >> arr[i] ;
        }
        long long int sum = 0;
        for (int i = 0; i < n; i++) {
            long long  curr = arr[i] ;
            int j = i +1 ;
            while( j < n  && (sign(arr[i]) == sign(arr[j])) ){
                curr = max(curr , arr[j]);
                j++;
            }
            sum += curr;
            i = j -1 ;
        }
        cout << sum << '\n' ;
    }

    return 0;
}