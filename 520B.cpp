/* 
                بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ   
    In the name of Allah, the Most Gracious, the Most Merciful.
*/
#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n , m ;
    cin >> n >> m; 
    // convert n to m
    // hmm
    //   reverse the problem
    // 2m -> m => m+1 ==> moves = 2
    // 2m +1 +1 -> 2m+2 -> m+1 => moves = 3
    int ans = 0 ;
    // moves now add 1 , div 2
    while( n < m){
        if(m%2 == 0)
            m /=2;
        else{
            m = (m+1)/2;
            ans++;
        }
        ans++;
    }
    ans  += (n-m);
    cout << ans << '\n' ;

    return 0;
}