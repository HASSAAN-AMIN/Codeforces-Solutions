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

    int n ;
    cin >> n ;
    unordered_map<string , int> arr;

    string s;
    for (int i = 0; i < n; i++) {
        cin >> s;
        arr[s]++;
    }
    int maxy = -1 ;
    for(auto x : arr){
        if(x.second > maxy){
            maxy = x.second;
            s = x.first;
        }
    }
    cout << s << '\n' ;

    return 0;
}