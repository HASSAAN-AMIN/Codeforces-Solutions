/* 
                بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ   
    In the name of Allah, the Most Gracious, the Most Merciful.
*/
#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n , x , y;
        cin >> n  >> x >> y ;

        int diff = y - x;

        for (int i = 1; i <= diff; i++) {
            if(diff%i)
                continue;
            if(diff/i +1  > n)
                continue;

            int j = (y - 1)/i;
            j = min(j , n-1) ;
            int st = y - j*i;
            for (int k = 0; k < n; k++) {
                cout << st + k*i << ' ';
            }
            cout << endl;
            break;
        }
        
    }

    return 0;
}