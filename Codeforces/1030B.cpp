/* 
                بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ   
    In the name of Allah, the Most Gracious, the Most Merciful.
*/
#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // int t;
    // cin >> t;
    // while(t--){
    //     int n;
    //     cin >> n;
        
    // }
    int n , d , m;
    cin >> n >> d >> m;

	for(int i = 0; i < m; i++){
		int x, y;
		cin >> x >> y;
		
		bool ok = true;
		if(!((x - y) <= d && (x - y) >= -d)) 
			ok = false;
		if(!((x + y) <= n + n - d && (x + y) >= d))
			ok = false;

		if(ok)
            cout << "YES" << '\n';
		else 
            cout << "NO" << '\n';
	}
    return 0;
}