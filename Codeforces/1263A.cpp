/* 
                بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ   
    In the name of Allah, the Most Gracious, the Most Merciful.
*/
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        long long arr[3];
        cin >> arr[0] >> arr[1] >> arr[2];
        sort(arr, arr+3);
        
        if(arr[0] + arr[1] <=  arr[2]){
            cout << arr[0] + arr[1] << '\n' ;
        }else{
            // [1] + min(([2]-[1]) , [0])
            // [0] + min( ([2]- [0]) , [1])
            // 5 , 6 , 9
            // 6 + 3
            // 5 + 4
            cout << (arr[0]+ arr[1]+ arr[2]) / 2 << '\n' ;
        }

        //R 
        //G 
        //B 


        // 8 1 4 
        // 1 4 8
        // 1 +  
        // 
    }

    return 0;
}