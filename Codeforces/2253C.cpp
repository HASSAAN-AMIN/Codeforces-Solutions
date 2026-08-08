/* 
                بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ   
    In the name of Allah, the Most Gracious, the Most Merciful.
*/
#include <iostream>
#include<vector>
#include<algorithm>
#include <set>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n , m  ,x, y;
        cin >> n  >> m >> x >> y ;

        // vector<int> arr(x) ;
        // vector<int> brr(y) ;
        // for (int i = 0; i < x; i++) {
        //     cin >> arr[i];
        // }
        // for (int i = 0; i < y; i++) {
        //     cin >> brr[i]; 
        // }

        vector<pair<int , int>> arr;
        for (int i = 0; i < x+y; i++) {
            int z;
            cin >> z;
            if(i < x)   
                arr.push_back( {z , 0 });
            else
                arr.push_back( {z , 1 });
        }
        int l = arr.size();
        // vector<int> arr;
        // for( int u : ss)
        //     arr.push_back(u);

        sort( arr.rbegin() , arr.rend());

        int cnt  = min( n + m -  1 , l) ;

        long long ans = 0;
        int nn = 0; 
        int mm = 0;
        int tot = 0; 

        for (int i = 0; i < arr.size() && tot < n + m - 1; i++) {

            if (i + 1 < arr.size() && arr[i+1].first == arr[i].first) {
                ans += arr[i].first;
                tot++;
                i++; 
            }else {
                if ( !arr[i].second && nn < n) {
                    ans += arr[i].first;
                    nn++;
                    tot++;
                }else if(arr[i].second && mm < m) {
                    ans += arr[i].first;
                    mm++;
                    tot++;
                }
            }
        }


        cout << ans << '\n';
        
    }

    return 0;
}