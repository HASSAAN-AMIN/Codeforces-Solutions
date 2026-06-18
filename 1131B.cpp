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

    int n  ;
    cin >> n ;
    vector<pair<int , int >  > arr(n +1); 
    arr.push_back({0,0} );
    for (int i = 0; i < n; i++) {
        cin >> arr[i].first >> arr[i].second ;
    }

    int pishu = 0  ; 
    for (int i = 1; i <= n; i++) {
        
        
        pishu +=  min( arr[i].first- arr[i-1].first  , arr[i].second - arr[i-1].second   ) ;
        
        cout << " a : " << arr[i].first- arr[i-1].first << " \n"; 
        cout << " b : " << arr[i].second - arr[i-1].second << "  \n"; 
    } 
    cout << pishu << '\n' ;



    return 0;
}