/* 
                بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ   
    In the name of Allah, the Most Gracious, the Most Merciful.
*/
#include <iostream>
#include <string>
#include<vector>


using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    vector<int>arr(s.size());
    arr[0] = 0 ;
    for (int i = 1; i < s.size(); i++) {
        if(s[i] == s[i-1])
            arr[i]++;
        arr[i] += arr[i-1];
    }

    int t;
    cin >> t;
    while(t--){
        int l , r ;
        cin >>l >> r ;
        cout << arr[r-1] - arr[l-1] << '\n';
    }

    return 0;
}