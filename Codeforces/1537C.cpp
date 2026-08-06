/* 
                بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ   
    In the name of Allah, the Most Gracious, the Most Merciful.
*/
#include <iostream>
#include<vector>
#include<algorithm>
#include <climits>


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
        for (int i = 0; i < n; i++) {
            cin >> arr[i] ; 
        }        
        int pos = 0 ;
        int mn =  INT_MAX ;

        sort(arr.begin() ,arr.end()) ;
        if(n== 2){
            cout << arr[0] << ' ' << arr[1] << '\n' ;
            continue ;
        }
        for (int i = 0; i < n-1; i++) {
            int ab  = abs(arr[i] - arr[i+1]);
            if( ab < mn){
                mn = ab;
                pos = i ; 
            }
        }
        //cout << "minimum is : " << mn << '\n' ;
        for (int i = pos +1 ; i < n; i++) {
            cout << arr[i] << ' ' ;
        }
        for (int i = 0; i < pos +1; i++) {
            cout << arr[i] << ' ' ; 
        }
        cout << '\n' ;
    }

    return 0;
}