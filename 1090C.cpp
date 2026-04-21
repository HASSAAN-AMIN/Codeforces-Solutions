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
        vector<int> arr(3*n , -1 )  ;
        int idx =  1 ;
        int minecraft = n +1  ;

        for (int i = 0; i < 3*n; i++) {
            if( i%3 == 0){
                arr[i] = idx ;
                idx++;
            }else{
                arr[i] = minecraft;
                minecraft++;
            }
        }

        for (int i = 0; i < 3*n; i++) {
            cout << arr[i] << ' ' ;
        }
        cout << '\n';
    }

    return 0;
}
