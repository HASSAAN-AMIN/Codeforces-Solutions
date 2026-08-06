/* 
                بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ   
    In the name of Allah, the Most Gracious, the Most Merciful.
*/
#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        string s ;
        cin >> s;
        if(s.size() == 2){
            cout << s[1] << '\n' ;
            continue;
        }
        char x =  s[0];
        for(char c : s){
            if(c < x)
                x = c;
        }
        cout << x << '\n' ;

    }

    return 0;
}