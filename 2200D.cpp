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
        int x ,  y ;
        cin >> x >> y ;
        vector<int> inner ;
        vector<int> outer ;
 
        for (int i = 0; i < n; i++) {
            int nig ;
            cin >> nig;
            if( i >= x  && i < y )
                inner.push_back(nig);
            else
                outer.push_back(nig);
        }
        // cout << "Inner is : ";
        // for (int i = 0; i < inner.size(); i++) {
        //     cout << inner[i] << ' ' ;
        // }
        // cout << '\n' ;
        int mini = inner[0];
        for (int i = 0 ; i < y-x; i++) {
            mini = min( mini , inner[i]) ;
        }
        // while(inner[0] != mini){
        //     int eis = inner[0];
        //     for (int i = 0; i <  y-x; i++) {
        //         inner[i] = inner[i + 1];
        //     }
        //     inner[y - 1] = eis;
        // }
        int bit = min_element(inner.begin(), inner.end()) - inner.begin();
        rotate(inner.begin(), inner.begin() + bit, inner.end());
        // cout << "Inner is : ";
        // for (int i = 0; i < inner.size(); i++) {
        //     cout << inner[i] << ' ' ;
        // }
        // cout << '\n' ;
        bool sus = false;
 
        // cout << "Outer is : ";
        // for (int i = 0; i < outer.size(); i++) {
        //     cout << outer[i] << ' ' ;
        // }
        // cout << '\n' ;
 
        if(outer.size() >= 1)
            for (int i = 0; ; i++) {
                if(i >= outer.size() && sus)
                    break;
                if(i < outer.size() && (sus || (outer[i] < mini)))
                    cout << outer[i] << ' ';
                else{
                    //cout << "( came : " ;
                    for(auto ofc : inner)
                        cout << ofc << ' ';
                    sus = true;
                    i--;
                    //cout << " : left ) " ;
                }
            }
        else
            for (int i = 0; i < inner.size(); i++) {
                cout << inner[i] << ' ' ;
            }
        cout << '\n' ;
        
    }

    // 5 0 5
    // 2 4 1 3 5
    
    // 1 3 5 2 4
    return 0;
}