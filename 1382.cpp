/* 
                بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ   
    In the name of Allah, the Most Gracious, the Most Merciful.
*/
#include <iostream>
#include<vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<long long>arr(n);
        bool sus = true;
        bool cont = true;
        for (int i = 0; i < n; i++) {
            cin >> arr[i] ;
            if(cont && arr[i] != 1)
                cont = false;
            if(cont)
                sus = !sus;
        }
        if(cont)
            sus = n%2 ;
        if(sus) 
            cout << "First" << '\n';
        else
            cout << "Second" << '\n' ;
    }

    return 0;
}