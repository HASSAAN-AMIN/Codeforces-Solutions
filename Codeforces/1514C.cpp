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

    int n ;
    cin >> n; 


    // prod is  1 mod n
    // so must be coprime 
    // set of coprimes


    long long  prod = 1 ;

    vector<int> ans;
    for (int i = 1; i < n; i++) {
        if(__gcd(i , n) == 1){   
            ans.push_back(i);
            prod = (prod * i )%n;
        }
    }

    bool sus = false;

    if( prod != 1)
        sus = true;

    cout << ans.size() - sus << '\n';

    for (int i = 0; i < ans.size(); i++) {
        if (sus && ans[i] == prod)
            continue;
        cout << ans[i] << ' ';
    }
    cout << '\n';


    return 0;
}