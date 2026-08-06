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
        long long x;
        cin >> n >> x;
        vector<long long> arr(n , 0);
        for (int i = 0; i < n; i++){
            long long z ;
            cin >> z ;
            if(z < n)
                arr[z]++;
        }
        long long mex = 0;

        // cout << "Array  is :" << '\n';
        // for (int i = 0; i < n; i++) {
        //     cout << arr[i] << ' ' ;
        // }
        //cout << '\n' ;
        for (int i = 0; i < n; i++) {
            if(arr[i] == 0)
                break;

            if(arr[i] == 1){
                mex++;
                continue;
            }else{
                if( i + x < n){
                    arr[i+x] += (arr[i]-1);
                    arr[i] = 1 ;
                    mex++;
                }else{
                    arr[i] = 1 ;
                    mex++;
                }
            }
        }
      
        cout << mex << '\n' ;
        
    }

    return 0;
}