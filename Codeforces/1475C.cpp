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
        int a , b ,k ;
        
        cin >> a >> b >> k ;
        
        // thinking
        

        // 3 4 4
        // 1 1 2 3
        // 2 3 2 4


        vector<int> arr( a , 0);
        vector<int> brr( b , 0);
        
        // so if its a graph
        vector <pair<int , int>  > g ( k , pair<int, int>() );
        for (int i = 0; i < k; i++) {
            cin >> g[i].first ;
            g[i].first--;
            arr[g[i].first]++;
        }
        for (int i = 0; i < k; i++) {
            cin >> g[i].second ;
            g[i].second--;
            brr[g[i].second]++;
        }

        long long ans =  k*(k+1); 

        for (int i = 0; i < k; i++) {
            ans -= arr[g[i].first  ]; 
            ans -= brr[g[i].second ] ;
        }

        cout << ans/2 << '\n' ;

    }

    return 0;
}