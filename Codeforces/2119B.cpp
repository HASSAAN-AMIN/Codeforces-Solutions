/* 
                بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ   
    In the name of Allah, the Most Gracious, the Most Merciful.
*/
#include <iostream>
#include<vector>
#include<algorithm>
#include <cmath>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<double> arr(n+1);
        long long  sx,sy,tx,ty;
        cin >> sx >> sy >> tx >> ty;
        arr[n] = sqrt((sx-tx)*(sx -tx) + (sy-ty)*(sy-ty)) ;

        for (int i = 0; i < n; i++) {
            cin >> arr[i] ;
        } 

        sort(arr.begin() , arr.end()) ;
        double sum = arr[n] ;
        for (int i = 0; i < n; i++) {
            sum -= arr[i] ;   
        }

        if(sum <= 0)
            cout << "YES\n" ;
        else
            cout << "NO\n" ; 
    }

    return 0;
}