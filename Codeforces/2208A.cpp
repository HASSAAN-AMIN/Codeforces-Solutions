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
        bool sus = false ;
        // smarter version below 
        // vector<vector<int> > arr( n  ,  vector<int>(n) ) ;  
        // vector<int> ans( n*n +1  ,  0 ) ; 
        // for (int i = 0; i < n; i++) {
        //     for (int j = 0; j < n; j++) {
        //         cin >> arr[i][j] ;
        //         ans[arr[i][j]]++;
        //         if(!sus && ans[arr[i][j]] > (n*(n-1)))
        //             sus = true;
        //     }
        // }
        // smarter version below 
        int x ;
        map <int , int > mapy ;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> x ; 
                mapy[x]++;
                if(!sus && mapy[x] > (n*n-n)){
                    sus = true;
                }
            }
        }
        if(sus)
            cout << "NO\n" ;
        else
            cout << "YES\n" ;
    }

    return 0;
}