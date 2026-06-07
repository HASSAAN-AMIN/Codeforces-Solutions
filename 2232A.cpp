/* 
                بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ   
    In the name of Allah, the Most Gracious, the Most Merciful.
*/
#include <iostream>
#include<vector>
#include<algorithm>
#include <unordered_map>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        vector<int> brr(n);
      //  unordered_map<int , int > arr(0); 
        for (int i = 0; i < n; i++) {
            cin >> brr[i] ;
      //      arr[brr[i]]++ ;
        }


        int cnt = 0 ;

        int i = 0 ; 
        int j = n -1 ; 
        sort(brr.begin() , brr.end()) ;

        while( i  <j && brr[i] != brr[j]){
            i++; j--;
            cnt++;
        }
        cout << cnt << '\n' ; 
        // why do i over complicate



        // sort(brr.begin() , brr.end()) ;

        // cout <<(  n - arr[brr[n/2]] +1 )/2  << '\n';
        
        // int bg = -1 ;
        // for( auto a : arr){
        //     cout << a.first << ' ' << a.second << '\n' ;
        // }
        // int lo = 0 ;
        // int hi = 0 ;
        // for(int i  :brr ){
        //     if(i > bg)
        //         lo++;
        //     if( i < bg)
        //         hi++ ;
        // }

        // cout<< min(lo  , hi) + abs(lo-hi)   << '\n';
        

    }

    return 0;
}