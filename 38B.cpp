/* 
                بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ   
    In the name of Allah, the Most Gracious, the Most Merciful.
*/
#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string a, b ;
    cin >> a >> b;
    // total pos = 64
    int x = 64;
    // subract 7+1+7 for rook
    x -= 15;
    // things to check for knight are
    // lies on rook line
    // areas outside region
    // areas common on rook lines

    x -= 1 ; // for knight space itself
    if(a[0] == b[0] || a[1] == b[1] )
        x += 1 ; // if knight is already covered

    // knight total are 8 possibilities
    char c  = b[0] ;
    char d  = b[1] ;
    if(c < 'c' || c > 'f' || d  > '6' || d < '3' )
        x -= 2 ;


    return 0;
}