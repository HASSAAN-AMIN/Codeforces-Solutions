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
        int n;
        cin >> n;

        // appends sum in end ? 

        if( n == 2 )
            cout << -1 << '\n' ;
        else { 
            if( n == 1)
                cout << 1 << '\n' ;
            else {
                
                cout << "1 2 3 " ;
            long long sum = 6 ;
            for (int i = 4; i <= n; i++) {
                cout << sum << ' ';
                sum += sum ;
            }
            cout << '\n' ;



            }
        }
        
    }

    return 0;
}