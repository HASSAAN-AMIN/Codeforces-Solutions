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
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i]; 
        }        
        bool sus  =false;
        for (int i = 1; i < n; i++) {
            if(arr[i] % arr[0] != 0){
                sus = true;
                break;
            }
        }
        if(sus)
            cout << "NO\n" ;
        else
            cout << "YES\n" ;
    }

    return 0;
}