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
            cin >> arr[i] ;
        }        
        vector<int> perm(n);
        for (int i = 0; i < n; i++) {
            perm[i] = i+ 1;
        }
        int l = 0 , r = 0 ;
        bool sus = false;

        while( r < n) {
            while( r < n -1 && arr[r] == arr[r+1])
                r++;
            if( l == r)
                sus = true;
            else
                rotate(perm.begin() + l , perm.begin() + l +1 , perm.begin() + r+ 1 );
            
            l = r+1;
            r++;
        }
        if(sus)
            cout << -1 ;
        else        
            for (int i = 0; i < n; i++) 
                cout << perm[i] << ' ';
        cout << '\n' ;



    }

    return 0;
}