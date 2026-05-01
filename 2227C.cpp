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
        vector<int> arr;
        vector<int> brr;
        vector<int> crr;
        vector<int> drr;
        int x ; 
        for (int i = 0; i < n; i++) {
            cin >> x ;
            if(x%6){
                if(x%2 == 0)
                    crr.push_back(x) ;
                else if(x%3 == 0)
                    drr.push_back(x) ;
                else
                    brr.push_back(x);
            }
            else
                arr.push_back(x);
        }
        for (int i = 0; i < arr.size(); i++) {
            cout << arr[i] << ' '; 
        }
        for (int i = 0; i < crr.size(); i++) {
            cout << crr[i] << ' '; 
        }
        for (int i = 0; i < brr.size(); i++) {
            cout << brr[i] << ' ' ;
        }
        for (int i = 0; i < drr.size(); i++) {
            cout << drr[i] << ' ' ;
        }
        cout << '\n' ;
    }

    return 0;
}   