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
        vector<int> arr(n) ;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }        

        sort(arr.begin() ,arr.end()) ;

        int i = arr.size() -1 ;

        int cnt = 0 ;

        for (int i = arr.size() -1; i >= 0 ; i++) {
            int curr = arr[i];
            
        }


    }

    return 0;
}