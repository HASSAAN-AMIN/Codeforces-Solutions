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
        cin >> s ;
        int a = 0  , b = 0 ;
        for (int i = 0; i< n; i++) {
            if((s[i] == '1'))
                a++;
            // also
            if(((i < n-2) && s[i] == '1' && s[i+1] == '0' && s[i+2] == '1')  ){
                s[i+1] = '1' ;
            }
        }
        int cnt  = 0;
        for (int i = 0; i < n ; i++) {
            cnt =  0;
            if(s[i] == '1'){
                int j = i ;
                for (; s[j] == '1' ; j++) {
                    cnt++;
                }
                i = j-1;
                b += (cnt/2 +1) ;
            }
        }
        cout << b << ' ' <<  a << '\n' ;
    }

    return 0;
}