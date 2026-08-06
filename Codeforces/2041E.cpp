/* 
                بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ   
    In the name of Allah, the Most Gracious, the Most Merciful.
*/
#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a , b ;
    cin >> a  >> b ;

    if(a == b){
        cout << 1 << '\n';
        cout << a ;
    } else{
        cout << 3 << '\n';
        cout << b << ' ' << b << ' ' << 3*a-2*b << '\n' ;
    }


    

    return 0;
}