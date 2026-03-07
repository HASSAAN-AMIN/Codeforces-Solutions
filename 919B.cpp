/* 
                بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ   
    In the name of Allah, the Most Gracious, the Most Merciful.
*/
#include <iostream>

using namespace std;

int sum(int x ){
    int sum = 0 ;
    while(x > 0 ){
        sum += x%10;
        x /=10;
    }
    return sum;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int k ;
    cin >> k ;

    int ans  = 0;
    while(k !=  0){

        ans++;
        if(sum(ans) == 10)  
            k--;
    }
    cout << ans << '\n' ;
    //cout << 19 + (k-1)*9 << '\n';

    // a_1 = 19
    // d = 9
    // a_n = a_1 + (n-1)*d
    /*
    1 9
    2 8
    3 7
    4 6 
    5 5
    6 4 
    7 3
    8 2 
    9 1
    1 0 9
    1 1 8
    1 2 7
    1 3 6
    1 4 5
    1 5 4
    1 6 3
    1 7 2
    1 8 1 
    1 9 0
    2 0 8
    1 2 7
    1 3 6
    2 1 7


    */

    return 0;
}