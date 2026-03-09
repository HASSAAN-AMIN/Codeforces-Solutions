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
    cin >> n ;
    vector<int> arr(n) ;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr.begin() , arr.end()) ; 

    int x = 1 ;
    int y = n;
    // cout << "Sorted Array"  << '\n' ;
    // for (int i = 0; i <n; i++) {
    //     cout << arr[i]  << ' ';
    // }
    // cout << '\n' ;

    for (int i = 0; i < n; i++) {
        int  j = i;
        int cnt = 0 ;
        while((j <n )&& (arr[i] == arr[j]) ){
            cnt++;
            j++;
        }
        // if(cnt > 1)
        //     cout << "Count is : " << cnt  << '\n' ; 
        i= j -1;
        x = max(x  , cnt);
        y -= cnt - 1 ;
    }
    cout << x << ' '<< y ;

    return 0;
}