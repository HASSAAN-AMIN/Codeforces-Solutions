/* 
                بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ   
    In the name of Allah, the Most Gracious, the Most Merciful.
*/
#include <iostream>
#include<vector>
#include<algorithm>


using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n  , l , r ;
        cin >> n >> l >> r ;

        vector<int> brr(n + 1);
        vector<int> arr(n + 1);

        brr[0] = 0;

        for (int i = 1; i <= n; i++)
            brr[i] = i;

        brr[r] = l - 1;

        for (int i = 1; i <= n; i++)
            arr[i] = brr[i] ^ brr[i - 1];

        for (int i = 1; i <= n; i++)
            cout << arr[i] << ' ';
            
        cout << '\n';
        
    }

    return 0;
}