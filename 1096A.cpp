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
        int x , y;
        cin >> x >> y; 
        if( x%2 == 1 && y%2 ==1 )
            cout << "NO\n" ;
        else
            cout << "YES\n" ;
    }

    return 0;
} 