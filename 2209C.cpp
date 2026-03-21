/* 
                بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ   
    In the name of Allah, the Most Gracious, the Most Merciful.
*/
//              EID MUBARAK
#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;


bool q( int i , int j ){
    cout << '?' << ' ' << i << ' ' << j << '\n';
    cout.flush();
    bool ans;
    cin >> ans;
    return ans;
}
int main() {
    // ios::sync_with_stdio(false);
    // cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        
        if (q(1, 2) == true) { 
            cout << "! 1\n"; 
            cout.flush();
        }else if (q(2, 3) == true) { 
            cout << "! 2\n"; 
            cout.flush(); 
        }else if (q(1, 3) == true){ 
            cout << "! 3\n"; 
            cout.flush(); 
        }else{
            bool sus =false;
            for (int i = 4;!sus && i < 2*n ; i += 2) {
                if (q(i, i + 1) == 1) {
                    cout << "! " << i << '\n';
                    cout.flush();
                    sus = true;
                }
            }
            if(!sus){
                cout << "! " << 2 * n << '\n';
                cout.flush();
            }
        }
        
        
    }

    return 0;
}