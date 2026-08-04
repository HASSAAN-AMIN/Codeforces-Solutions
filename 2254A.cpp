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
        
        vector<int> arr(3) ;
        cin >> arr[0] >> arr[1] >> arr[2];

        int cnt = 0 ;
        while( arr[0] != arr[1]   && arr[1] != arr[2]   &&  arr[0] != arr[2]   ){
            sort(arr.begin() , arr.end() );
            arr[2]--;
            arr[0]++;
            cnt++;
        }
        cout << cnt << '\n' ;

        

        
    }

    return 0;
}