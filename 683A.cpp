/* 
                بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ   
    In the name of Allah, the Most Gracious, the Most Merciful.
*/
#include <iostream>

using namespace std;

int main() {
    int a , x , y;
    cin >> a >> x >> y ;
    if(x <0 || y < 0)   
        cout << 2 << '\n' ;
    else if((x == a && y <= a) || (x <= a && y == a ) || (x == 0 && y <= a) || (x <= a && y == 0 )  )
        cout << 1 << '\n';
    else if(x <= a && y <= a)
        cout << 0 << '\n';
    else
        cout << 2 << '\n';

    return 0;
}