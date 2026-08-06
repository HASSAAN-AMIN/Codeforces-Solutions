/* 
                بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ   
    In the name of Allah, the Most Gracious, the Most Merciful.
*/
//              EID MUBARAK
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
        vector<int > arr(n) ;
        for (int i = 0; i < n; i++) {
            cin >> arr[i] ;
        }

        for (int i = 0; i < n; i++) {
            
            int s = 0 , l  = 0 ;
            for (int j = i+1; j < n; j++) {
                if(arr[j] > arr[i] )
                    l++;
                else if (arr[j] < arr[i]) 
                    s++;
                
            }
            cout << max(l , s) << ' ';
        }
        cout << '\n' ;



        
    }

    return 0;
}