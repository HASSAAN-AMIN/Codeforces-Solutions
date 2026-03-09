/* 
                بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ   
    In the name of Allah, the Most Gracious, the Most Merciful.
*/
#include <iostream>

using namespace std;
int dfs(int x , int n ){
    if(x > n)
        return 0;

    return  1+ dfs(x*10 , n)  + dfs((x*10 +1)  , n ); 
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n ;

    cout << dfs(1 , n) << '\n';

    return 0;
}