/* 
                بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ   
    In the name of Allah, the Most Gracious, the Most Merciful.
*/
#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<long long> get_3( vector<long long> &arr){
    int x = -1 , y = -1 ,  z = -1 ;
    for (int i = 0; i < arr.size(); i++) {
        if( x == -1 || arr[i] > arr[x]){
            z = y ;
            y = x;
            x = i;
        }else if( y == -1 || arr[i] > arr[y]){
            z = y;
            y = i ;
        }else if( z== -1 || arr[i] > arr[z]){
            z = i;
        }
    }
    return {x , y, z } ;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<long long> arr(n);
        vector<long long> brr(n);
        vector<long long> crr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i] ;    
        }
        for (int i = 0; i < n; i++) {
            cin >> brr[i] ;    
        }
        for (int i = 0; i < n; i++) {
            cin >> crr[i] ;    
        }
        long long ans =  0 ;
        for(auto i : get_3(arr))
            for(auto j : get_3(brr))
                for(auto k : get_3(crr))
                    if( i != j && j != k &&  i != k)
                        ans = max(ans  , arr[i] + brr[j] + crr[k]) ;
        cout << ans << '\n' ;         
        
    }

    return 0;
}