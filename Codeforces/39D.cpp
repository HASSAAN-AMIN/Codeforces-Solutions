/* 
                بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ   
    In the name of Allah, the Most Gracious, the Most Merciful.
*/
#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int arr[6];
    for (int i = 0; i < 6; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < 3; i++) {
        if(arr[i] == arr[i+3]){
            cout << "YES" << '\n' ;
            return  0 ;
        }
    }
    cout << "NO\n" ;

    return 0;
}