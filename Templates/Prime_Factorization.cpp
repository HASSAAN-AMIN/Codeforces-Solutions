/* 
                بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ   
    In the name of Allah, the Most Gracious, the Most Merciful.
*/
#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;


vector<int> factors(int n){
    vector<int> ans ;
    for (int i = 2; i*i <= n; i++){
        while(n % i == 0){
            ans.push_back(i);
            n /= i;
        }
    }
    if( n > 1)
        ans.push_back(n);
    return ans;
}

int main() {
    // ios::sync_with_stdio(false);
    // cin.tie(nullptr);

    cout << "cases :  ? " << '\n' ;
    int t;
    cin >> t;
    while(t--){
        int n;
        cout << " num \n" ;
        cin >> n ;

        vector<int> arr = factors(n) ;

        for( auto u : arr)
            cout << u << ' ';
        cout << '\n';

        
    }

    return 0;
}