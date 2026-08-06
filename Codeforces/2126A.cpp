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
        string s ;
        cin >> s ;
        char c = s[0] ;
        for (int i = 1; i < s.size(); i++) {
            if( s[i] < c)
                c = s[i];
        }   
        cout << c << '\n' ;

    }

    return 0;
}