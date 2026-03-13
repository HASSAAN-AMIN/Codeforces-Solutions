/* 
                بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ   
    In the name of Allah, the Most Gracious, the Most Merciful.
*/
#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s ;
    cin >> s ;
    bool sus = true;

    for (int i = 1; i < s.size(); i++) {
        if(s[0] != s[i]){
            sus = false;
            break;
        }
    }
    if(sus){
        cout << 0 << '\n' ;
    }else{
        for (int i = 0; i < s.size()/2 ; i++) {
            if(s[i] != s[s.size() -i- 1]){
                sus = true;
                break;
            }
        }
        if(sus)
            cout << s.size() ;
        else
            cout << s.size() -1 ;
    }

    return 0;
}