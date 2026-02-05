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

    int n ;
    cin >> n;
    vector<long long> arr(n+1 ,0); 
    vector<long long> brr(n+1 , 0);
    for(int i = 1 ; i < n +1; i++){
        cin >> arr[i];
        brr[i] = arr[i];
        arr[i] += arr[i-1];
    }
    sort(brr.begin(), brr.end());
    for(int i = 1 ; i < n+1; i++){
        brr[i] += brr[i-1];
    }

    int t;
    cin >> t;
    while(t--){
        int l , r , tt;
        cin >> tt >> l >> r;
        if(tt == 1)
            cout << arr[r] -arr[l-1];
        else
            cout << brr[r] - brr[l-1];
        cout << '\n' ;
    }

    return 0;
}