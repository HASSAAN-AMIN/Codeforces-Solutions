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
        vector<int> arr(n) ;
        for (int i = 0; i < n; i++) {
            cin >> arr[i] ;
        }        
        vector< long long> pre(n) ;
        pre[0] = abs(arr[0]) ;
        for (int i = 1; i < n; i++) 
            pre[i] = pre[i-1] + abs(arr[i]) ;
        
        
        vector< long long> suf(n+1) ;
        suf[n-1] = arr[n-1] ;
        for (int i = n-2; i >= 0; i--) {
            suf[i] = suf[i+1] + arr[i]  ;
        }
        long long ans = suf[0] ;
        int idx = -1 ;
        for (int i = 1; i < n; i++) {
            if(arr[i] >  0 ){
                long long curr = pre[i] + suf[i+1] -arr[i] ;
                if(curr > ans)  {
                    ans = curr;
                    idx = i ;
                }
            }
        }
        if (idx == -1){
            cout << 0  << '\n' ;
            continue;
        }
        vector<int> sol ;
        for(int i = idx-1 ; i >= 0 ; i--){
            if(sol.size() & 1)
                arr[i] = -arr[i] ;
            
            if(arr[i] > 0)
                sol.push_back(i);
        } 
        sol.push_back(idx) ;


        cout<<  sol.size() << '\n' ;
        for (int i = 0; i < sol.size(); i++) {
            cout << sol[i] +1 << ' ' ;
        } 
        cout << '\n' ; 

        

    }

    return 0;
} 