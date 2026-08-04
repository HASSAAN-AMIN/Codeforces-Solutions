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

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        vector<int> brr(n);
        for (int i = 0; i < n; i++) {
            cin >> brr[i];
        }

        sort(arr.begin() , arr.end()) ;
        sort(brr.begin() , brr.end()) ;
                

        if( arr == brr){
            cout<< "YES" << '\n' ;
            continue; 
        }
        int x = 0 ; 
        for (int i = 0; i < n; i++) {
            x ^= arr[i] ^ brr[i]; 
        }

        int idx  = -1 ; 

        for (int i = 0; i < n; i++) {
            if( arr[i] == x) 
                idx = i ;
            else
                arr[i] ^= x ;
        }


        sort(arr.begin() , arr.end()) ;


        if( arr == brr && idx != -1)    
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n' ;        


        
    }

    return 0;
}