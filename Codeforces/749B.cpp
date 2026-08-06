/* 
                بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ   
    In the name of Allah, the Most Gracious, the Most Merciful.
*/
#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int arr[3][2];

    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> arr[i][j] ;
        }
    }
    cout << 3 << '\n' ;

    cout <<  arr[0][0]+arr[1][0]-arr[2][0] << ' ' <<  arr[0][1]+arr[1][1]-arr[2][1] << '\n';
    cout <<  arr[0][0]-arr[1][0]+arr[2][0] << ' ' <<  arr[0][1]-arr[1][1]+arr[2][1] << '\n';
    cout << -arr[0][0]+arr[1][0]+arr[2][0] << ' ' << -arr[0][1]+arr[1][1]+arr[2][1] << '\n';

    return 0;
}