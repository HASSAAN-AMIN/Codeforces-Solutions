/* 
                بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ   
    In the name of Allah, the Most Gracious, the Most Merciful.
*/
#include <iostream>
#include<vector>
#include<algorithm>
#include <map>


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

        sort(arr.begin() , arr.end()) ;
        swap( arr[0] , arr[n-1] ) ;
        sort(arr.begin() +1 , arr.end()) ;
        
        vector<int> good ; 
        vector<int> eww ;
        
        for (int i = 1; i < n; i++) {
            if (!good.empty() && good.back() == arr[i]) {
                eww.push_back(arr[i]); 
            } else {
                good.push_back(arr[i]); 
            }
        }
        int crnt = 1 ; 
        for (int i = 0; i < good.size(); i++) {
            arr[crnt] = good[i];
            crnt++;
        }
        for (int i = 0; i < eww.size(); i++) {
            arr[crnt] = eww[i];
            crnt++;
        }
        long long ans = 0 ;
        
        map < int , int> mapy;

        int x  = 0 ;
        for (int i = 0; i < n; i++) {
            mapy[arr[i]]++;
            while(mapy[x])
                x++;
            ans += arr[0] + x ;
        }

        cout << ans << '\n' ;
        



    }

    return 0;
}