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
        long long n;
        cin >> n;

        long long a  = -1 ,  b = -1 , c = -1 ;
        bool sus  =false;
        for (int i = 2; i*i < n  ; i++) {
            if(n%i == 0){
                a  = i ;
                break;
            }
        }
        if(a == -1)
            sus = true;
        if(!sus){
            n = n/a;
            for (int i = a+1; i*i < n; i++) {
                if( n%i == 0 && n%(n/i) ==0){
                    b = i;
                    c = n/i;
                    break;
                }
            }
            if(b == -1)
                sus = true;
        }
        if(sus)
            cout << "NO\n" ;
        else{
            cout << "YES\n";
            cout << a << ' ' << b << ' ' << c << '\n';
        }

    }

    return 0;
}