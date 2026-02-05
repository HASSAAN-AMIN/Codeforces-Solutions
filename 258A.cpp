/* 
                بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ   
    In the name of Allah, the Most Gracious, the Most Merciful.
*/
#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // int t;
    // cin >> t;
    // while(t--){
    //     int n;
    //     cin >> n;
        string s;
        cin >> s ;
        // a randoom string
        // 110110100100110
        // as we know since num is 2^this + 2^ that
        // but as we remove one zero(ofc we removing a zero)
        // it all becomes powers decreased
        // but we dont wanna decrease the powers
        // so what we do is 
        // we  remove teh most left zero 
        // so that we could  decrease as less as we can
        // easy shi
        // but wait
        // what if its all 1
        // lol just remove any 1
        // ez pz lemon squeezy
        bool got_zero = false ;
        for (int i = 0; i < s.length(); i++) {
            if((i == s.length()-1)  && !got_zero)
                break;
            if(!got_zero){
                if(s[i] == '0'){
                    got_zero = true;
                    continue;
                }else
                    cout << 1 ;
            }else
                cout<< s[i] ; 
        }

    // }

    return 0;
}