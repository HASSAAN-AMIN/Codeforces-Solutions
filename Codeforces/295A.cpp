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

    // int t;
    // cin >> t;
    // while(t--){
    //     int n;
    //     cin >> n;
    // }


    int n, m , k;
    cin >> n >> m >> k ;

    vector<long long > arr(n +1  ,0 ) ;
    for (int i = 1; i < n+1; i++) {
        cin >> arr[i];
    }

    vector<long long > dif( n+2 , 0 ) ; 

    vector< vector<int> > ops( m , vector<int>(3) )  ;
    
    for (int i = 0; i < m; i++) {
        cin >> ops[i][0] >> ops[i][1] >> ops[i][2] ; 
    }

    vector<long long> times( m+ 2); 
    int x , y ;
    for (int i = 0; i < k; i++) {
        cin >> x >> y ;
        times[x]++;
        times[y+1]--;
    }

    for (int i = 1; i < m +1 ; i++) {
        times[i] += times[i-1];

        dif[ ops[i-1][0]  ] += times[i]*ops[i-1][2];
        dif[ ops[i-1][1]  + 1 ] -= times[i]*ops[i-1][2];

    }


    for (int i = 1; i < n+2; i++) {
        dif[i] += dif[i-1];
    }


    for (int i = 1; i < n+1; i++) {
        cout << arr[i] + dif[i] << ' ' ;
    }
    // omg i am genius
    cout << '\n';

    return 0;
} 