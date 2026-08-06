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
        bool sus = false ;
        for (int i = 0; i < n; i++) {
            cin >> arr[i] ;
            if(arr[i] == 100)
                sus = true;
        }
        // chat why i am so smart?
        if(sus) 
            cout << "YES" << '\n' ;
        else
            cout << "NO" << '\n' ;


    }

    return 0;
}