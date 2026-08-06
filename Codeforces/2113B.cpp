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
        long long  w , h, a , b;
        long long x1 , y1, x2 ,y2;
        cin >> w >> h >> a >> b ;
        cin >> x1 >> y1 >> x2 >> y2 ;

        if (x1 == x2) {
        cout << (abs(y1 - y2) % b == 0 ? "Yes\n" : "No\n");
        }
        else if (y1 == y2) {
            cout << (abs(x1 - x2) % a == 0 ? "Yes\n" : "No\n");
        }
        else if ((x1 - x2) % a == 0 || (y1 - y2) % b == 0) {
            cout << "Yes\n";
        }
        else {
            cout << "No\n";
        }
    }


    return 0;
}