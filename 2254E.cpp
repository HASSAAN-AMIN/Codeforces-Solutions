/* 
                بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ   
    In the name of Allah, the Most Gracious, the Most Merciful.
*/
#include <iostream>
#include<vector>
#include<algorithm>
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

        vector<long long> arr(n);

        multiset<long long> shi;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            shi.insert(arr[i]);
        }

        vector<long long > brr(n) ;

        bool sus = true;

        long long cur = 0 ;
        for (int i = 0; i < n; i++) {
            auto it = shi.lower_bound(1 - cur) ;
            if( it == shi.end()){
                sus = false;
                break;
            }
            cur += *it ;
            brr[i] = cur ; 
            shi.erase(it) ;
        }   
        
        if (!sus) {
            cout << -1 << '\n';
        }
        else {
            for (auto x : brr)
                cout << x << " ";
            cout << '\n';
        }
        
        

        
    }

    return 0;
}