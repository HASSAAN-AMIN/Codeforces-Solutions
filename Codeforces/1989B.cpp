/* 
                بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ   
    In the name of Allah, the Most Gracious, the Most Merciful.
*/
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        string a ;
        string b ;
        cin >> a >> b ;

        // the minimum  length


        // now we gonna check how many actually matches b
        // and like
        // intuation says that ( size_b - matched + ans ) is the answer
        // idk lets check it out

        // int cnt = 0;

        // for (int i = 0; i < b.size(); i++) {
        //     for (int j = 0; j < a.size(); j++) {
        //         int umm = 0;
                
        //         // until stuff matches
        //         while (i + umm < b.size() && j + umm < a.size() && b[i + umm] == a[j + umm]) 
        //             umm++;
                

        //         // Keep track of the best streak we've ever seen
        //         if (umm > cnt) {
        //             cnt = umm;
        //         }
        //         cnt = max( cnt , umm);
        //     }
        // }

        // int ans = a.size() ;
        // int j = 0; 
        // int cnt = 0;

        // for (int i = 0; i < b.size(); i++) {
        //     if (j < a.size() && b[i] == a[j]) {
        //         cnt++; 
        //         j++;       
        //     }
        // }

        // cout << b.size() + ans - cnt << '\n' ;

        int cnt = 0;

        for (int i = 0; i < b.size(); i++) {
            int k = i;
            int umm = 0;
            
            for (int j = 0; j < a.size(); j++) {
                if (k < b.size() && a[j] == b[k]) {
                    umm++;
                    k++;
                }
            }
            cnt = max(cnt, umm);
        }

        cout << a.size() + b.size() - cnt << '\n';

    }

    return 0;
}