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
        int n , k;
        cin >> n >> k ;


        int ans = n;

        for (int j = 1; j * j <= n; j++) {

			if (n % j == 0) {
				if (j <= k) {
					ans = min(ans, n / j);
				}

				if (n / j <= k) {
					ans = min(ans, j);
				}
			}
		}

		cout << ans << '\n';
        
    }

    return 0;
}