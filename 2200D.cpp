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
        int mini = inner[0];
        for (int i = 0 ; i < y-x; i++) {
            mini = min( mini , inner[i]) ;
        }
        int bit = min_element(inner.begin(), inner.end()) - inner.begin();
        rotate(inner.begin(), inner.begin() + bit, inner.end());

        bool sus = false;
        if(outer.size() >= 1)
            for (int i = 0; ; i++) {
                if(i >= outer.size() && sus)
                    break;
                if(i < outer.size() && (sus || (outer[i] < mini)))
                    cout << outer[i] << ' ';
                else{
                    for(auto ofc : inner)
                        cout << ofc << ' ';
                    sus = true;
                    i--;
                }
            }
        else
            for (int i = 0; i < inner.size(); i++) {
                cout << inner[i] << ' ' ;
            }
        cout << '\n' ;
        
    }
    return 0;
}