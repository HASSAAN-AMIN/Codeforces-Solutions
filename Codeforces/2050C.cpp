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
        cin >>s ;
        int sum  =  0 , twos=  0 , threes = 0;
        for(char c : s){
            sum += c - '0';
            if(c == '2')
                twos++;
            else if(c == '3')
                threes++;
        }
        bool sus = false;
        for (int i = 0; i <= twos; i++) {
            for (int j = 0; j <= threes; j++) {
                if( (sum + 2*i + 6*j)%9 == 0){
                    sus = true;
                    break;
                }
            }
            if(sus)
                break;
        }
        if(sus)
            cout << "YES" << '\n'  ;
        else
            cout << "NO" << '\n';
    }

    return 0;
}