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
        string s;
        cin >> s;
        int ones = 0;
        int zeroes = 0;
        for(char c : s){
            if(c == '1')
                ones++;
        }
        zeroes = s.length()-ones;
        if(ones  == zeroes)
            cout << 0 << '\n';
        else if
        // 111100
        //  00
        // 
    
    }

    return 0;
}