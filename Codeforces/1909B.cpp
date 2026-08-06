/* 
                بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ   
    In the name of Allah, the Most Gracious, the Most Merciful.
*/
#include <iostream>
#include <vector>
#include <set>
using namespace std;

bool good(vector<long long>& arr, long long x){
    set<long long> s;

    for(long long v : arr){
        s.insert(v % x);
        if(s.size() > 2) 
            return false;
    }

    return s.size() == 2;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<long long> arr(n);
        for(int i = 0; i < n; i++)
            cin >> arr[i];

        for(long long i = 2; ; i *= 2){
            if(good(arr, i)){
                cout << i << '\n';
                break;
            }
        }
    }
}