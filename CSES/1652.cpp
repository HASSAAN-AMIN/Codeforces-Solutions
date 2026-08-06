/* 
                بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ   
    In the name of Allah, the Most Gracious, the Most Merciful.
*/
#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int arr[1001][1001] = {0} ;


    int n ;
    cin >> n;

    int q ;
    cin >> q ;
    
    char c ;
    for (int i = 1; i < n +1 ; i++) {
        for (int j = 1; j < n +1; j++) {
            cin >> c ;
            arr[i][j] = ( c== '.')? 0 : 1 ;
            arr[i][j] += arr[i-1][j] +arr[i][j-1] - arr[i-1][j-1];
        } 
    }
    while( q--) {
        int x1 , x2 , y1 ,y2 ;
        cin >> x1 >> y1 >> x2 >>y2;

        x1--;
        y1--;

        cout << arr[x2][y2] - arr[x2][y1] -arr[x1][y2]+ arr[x1][y1] <<  '\n' ;
    }

    return 0;
}