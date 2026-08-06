/* 
                بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ   
    In the name of Allah, the Most Gracious, the Most Merciful.
*/
#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    unordered_map<string , int > arr;
    string s;
    
    while (t--) {
        cin >> s;

        if (arr[s] == 0) {
            cout << "OK\n";
        } else {
            cout << s << arr[s] << "\n";
        }

        arr[s]++;
    }

    return 0;
}