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
        int n;
        cin >> n;
        string s ;
        cin >> s;
        int cnt = 0;
        for(char c : s){
            if(c == '0')
                cnt++;
        }
        if(cnt == 1 || cnt%2==0)
            cout << "BOB\n";
        else
            cout << "ALICE\n" ;
        
    }

    return 0;
}