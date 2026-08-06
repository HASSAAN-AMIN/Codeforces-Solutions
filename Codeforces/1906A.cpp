/* 
                بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ   
    In the name of Allah, the Most Gracious, the Most Merciful.
*/
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

bool is_near(int r1, int c1, int r2, int c2) {
    int dr = abs(r1 - r2);
    int dc = abs(c1 - c2);
    return (dr <= 1 && dc <= 1) && !(dr == 0 && dc == 0);
}

int main() {
    int n = 3;
    vector<string> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    string ans = "DIH";

    
    for (int r1 = 0; r1 < n; r1++) {
        for (int c1 = 0; c1 < n; c1++) {

            for (int r2 = 0; r2 < n; r2++) {
                for (int c2 = 0; c2 < n; c2++) {

                    for (int r3 = 0; r3 < n; r3++) {
                        for (int c3 = 0; c3 < n; c3++) {
                            
                            bool sus = (r1 != r2 || c1 != c2) && 
                                        (r2 != r3 || c2 != c3) && 
                                        (r1 != r3 || c1 != c3);
                            
                            if (sus) {

                                if (is_near(r1, c1, r2, c2) && is_near(r2, c2, r3, c3)) {
                                    string crnt = "";
                                    crnt += arr[r1][c1];
                                    crnt += arr[r2][c2];
                                    crnt += arr[r3][c3];
                                    
                                    if (crnt < ans) {
                                        ans = crnt;
                                    }
                                }
                            }


                        }
                    }
                }
            }
        }
    }

    cout << ans << '\n';

    return 0;
}