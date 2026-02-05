/* 
                بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ   
    In the name of Allah, the Most Gracious, the Most Merciful.
*/
#include <iostream>
#include<vector>

using namespace std;

long long dih(long long ax , long long ay , long long bx  , long long by ){
    return (ax-bx)*(ax -bx) + (ay-by)*(ay-by); 
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<long long> arr(n+2);
        vector<long long> brr(n+2);
        for (int i = 0; i < n+2; i++) {
            cin >> arr[i];
            cin >> brr[i];
        }

        bool sus = false;

        for (int i = 0; i < n; i++) {
            if(dih(arr[n] , brr[n] , arr[n+1] ,brr[n+1]) >= dih(arr[i] , brr[i] , arr[n+1] ,brr[n+1])  ){
                sus = true;
                break;
            }
        }
    

        if(sus)
            cout << "NO" << '\n' ;
        else    
            cout << "YES" << '\n' ;
    }

    return 0;
}