/* 
                بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ   
    In the name of Allah, the Most Gracious, the Most Merciful.
*/
#include <iostream>
#include<vector>
#include<algorithm>
#include <climits>

using namespace std;

const int k = 200000 ;
bool arr[k] = {false} ;
vector<long long> good;
void sieve(){
    arr[0] = true;
    arr[1] = true;
    for (int i = 2; i*i < k; i++) {
        if(arr[i] == false)
            for (int j = i*i; j < k; j += i ) {
                arr[j] = true;
            }
    }
    for (int i = 2; i < k; i++) {
        if (!arr[i]) {
            good.push_back(i);
        }
    }
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    sieve(); 
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        
        // cout << 1 << ' ' ;
        // for (int i = 1; i < n; i++) {
        //     cout << (long long)i * (long long)(i+ 1) << ' '; 
        // }
        // cout << '\n' ;
        cout << good[0] << ' ' ;
        for (int i = 1; i < n; i++) {
            cout << good[i-1]*good[i] << ' ';
        }
        cout << '\n' ;

    }

    return 0;
}
