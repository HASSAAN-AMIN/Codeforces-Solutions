/* 
                بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ   
    In the name of Allah, the Most Gracious, the Most Merciful.
*/
#include <iostream>
#include<vector>
#include<algorithm>
#include <numeric>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int arr[3] ;
    string s;
    cin >> arr[0] >> arr[1] >> arr[2] >> s;

    cout << accumulate(arr , arr+ 3 , 0) << ' ' << s << '\n';

    return 0;
}