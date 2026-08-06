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
        vector<int> arr(n) ;
        for (int i = 0; i < n; i++) {
            cin >> arr[i] ;
        }
        
        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                if(arr[j] > arr[i]){
                    arr[j] = arr[i];
                    break;
                }
            }
        }
        long long sum = 0  ;
        for (int i = 0; i < n; i++) {
            sum += arr[i] ;
        }
        cout << sum << '\n' ; 

    }

    return 0;
}