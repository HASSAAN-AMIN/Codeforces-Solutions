/* 
                بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ   
    In the name of Allah, the Most Gracious, the Most Merciful.
*/
#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int x , n ;
        cin >> n >> x ;
        int odd = 0 , even = 0 ;
        for (int i = 0; i < n; i++) {
            int a;
            cin >> a;
            if(a%2==0)
                even++;
            else
                odd++;
        }
        // exactly x elements 
        // and sum odd

        // 1 odd and (x-1) evens
        // 3 odd and (x-3) evens
        // odd odds and (x-odd odds) evens
        
        // approach
        // pick neccesay odds 
        // and atlease one should be 


        // 4 2
        // 19 11 13 15

        if(even == 0 && x%2 == 0){
            cout << "NO" << '\n';
            continue;
        }
        if(odd > 0){
            int ans = 0 ;
            ans += odd;
            if(ans%2 == 0)
                ans--;
            if(ans + even >= x)
                cout << "YES" << '\n' ;
            else    
                cout << "NO" << '\n'  ;
        }else{
            cout << "NO" << '\n' ;
        }

    }

    return 0;
}