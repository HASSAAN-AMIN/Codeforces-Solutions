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
        int sum = 0 ;
        int cnt  = 0 ; 
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            if( arr[i] == -1)
                cnt++ ;
            sum += arr[i]; 
        }
        if( sum == 0 || ((n%2 == 0) && ( max( cnt , n-cnt)- min( cnt , n-cnt))%4 == 0) )
            cout << "YES" << '\n' ;
        else
            cout << "NO" << '\n' ;
        
    }

    return 0;
}