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
    
    string ss = "abc";
    while(t--){
            
        string s;
        cin >> s;
        int cnt = 0;
        for (int i = 0; i < 3; i++) {
            cnt += (s[i] != ss[i]);
        }
        cout << (cnt <= 2 ? "YES\n" : "NO\n");
    }

    return 0;
}