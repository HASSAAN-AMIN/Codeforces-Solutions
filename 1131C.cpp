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

    int n ;
    cin >> n  ;

    vector<int> arr(n) ;
    for (int i = 0; i < n; i++) {
        cin >> arr[i] ; 
    }

    sort(arr.begin() , arr.end() ) ;

    vector<int> brr  ; 


    for (int i = 0; i < n; i++) {
        if(i%2)
            brr.push_back(arr[i]);
        else
            brr.insert(brr.begin() , arr[i]) ;
    }

    for (int i = 0; i < n; i++) {
        cout << brr[i] << ' ' ; 

    }
    cout << '\n' ;




    return 0;
}