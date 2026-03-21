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

    int n; 
    cin >> n; 
    vector<int> arr(n) ;
    for (int i = 0; i < n; i++) {
        cin >> arr[i]  ;
    }
    long long int s = arr[0] ;
    long long int sc = 0 ;
    long long int l = arr[0] ;
    long long int lc = 0 ;

    for (int i = 0; i < n; i++) {
        if(arr[i] < s){
            s = arr[i] ;
            sc = 1;
        }else if(arr[i] == s){
            sc++;
        }
        if(arr[i] > l){
            l = arr[i] ;
            lc = 1;
        }else if(arr[i] == l){
            lc++;
        }   
    }
    if (s == l) {
        cout << 0 << " " << (long long)n * (n - 1) / 2 << "\n";
    } else {
        cout << l - s << " " << sc * lc << "\n";
    }


    

    return 0;
}