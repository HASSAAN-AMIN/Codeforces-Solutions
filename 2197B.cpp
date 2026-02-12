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
        vector<int>arr(n);
        vector<int>brr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> brr[i];
        }
        int j = 0 ;
        bool sus = false;
        for (int i = 0; i < n; i++) {
            if(j == n){
                sus =true;
                break;
            }
            while(j < n && brr[i] != arr[j] )
                j++;
            if(j == n){
                sus =true;
                break;
            }
            if(brr[i] ==  arr[j])
                continue;
        }
        if( !sus)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n' ;
        
        
    }

    return 0;
}