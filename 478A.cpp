/* 
                بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ   
    In the name of Allah, the Most Gracious, the Most Merciful.
*/
#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int arr[5];
    int sum = 0 ;
    for (int i = 0; i < 5; i++) {
        cin >> arr[i] ;
        sum += arr[i] ;
    }
    if(sum %5 == 0 && sum > 4)
        cout << sum/5 << '\n' ;
    else
        cout << -1 << '\n' ;

    return 0;
}