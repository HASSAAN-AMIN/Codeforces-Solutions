/* 
                بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ   
    In the name of Allah, the Most Gracious, the Most Merciful.
*/
#include <iostream>
#include<vector>
#include<algorithm>
#include<set>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // int t;
    // cin >> t;
    // while(t--){
    //     int n;
    //     cin >> n;
        
    // }
    int n  ;
    cin >>n ;
    vector<int > arr(n) ;
    vector<bool> pisho(n +1  , false) ;
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i] ;
    }

    for (int i = 0; i < n; i++) {
        if(arr[i]  <=  n && pisho[arr[i]] == false )
            pisho[arr[i]] =   true ;
        else
            arr[i] = -1 ;   
    }

    int p = 1 ;
    for (int i = 0; i < n; i++) {
        if(arr[i] != -1)
            continue;
        while(pisho[p])
            p++;
        arr[i] = p ;
        pisho[p] = true;
    }
    for (int i = 0; i < n; i++) {
        cout << arr[i]   << ' ';
    }
    cout << '\n' ;


    return 0;
}