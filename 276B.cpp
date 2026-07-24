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

    string s ;
    cin >> s ;

    vector<int> cnt(26, 0);
    for (char c : s)
        cnt[c - 'a']++;

    int o = 0;
    for (int x : cnt)
        if (x % 2)
            o++;

    if (o == 0 || o % 2 == 1)
        cout << "First";
    else
        cout << "Second";

    return 0;
}