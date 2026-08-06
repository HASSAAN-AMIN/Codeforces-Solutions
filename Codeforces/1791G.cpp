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
        long long c;
        cin >> n;
        cin >> c;
        vector<int> arr(n) ;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            arr[i]+= i +1 ;
        }
        //sort(arr.begin() , arr.end()) ;
        sort(arr.begin()  , arr.end()) ;

        long long sum = 0;
        int ans = 0;

        for (int i = 0; i < n; i++) {
            if (sum + arr[i] > c)
                break;
            sum += arr[i];
            ans++;
        }

        cout << ans << '\n';

        // 4 3
        // 2 3 4 1
        // 3 5 7 6
        // 3 5 6 7
        
        // In the second test case, you go four units to the right and 
        // use the teleporter to go to 0
        // , then go six units right and use the teleporter at index 6
        // to go to 0
        // . The total cost will be 4+6+6+4=20
        // . You are left with 12
        // coins, but it is not enough to reach any other teleporter and 
        // use it so the answer is 2
        
        // 8 32
        // 100 52 13 6 9 4 100 35
        // 0   1  2  3 4 5  6   7
        // 100 53 15  9 13 9 106 42
        // 100  9 9 13 15 42 53 106
        // 18+ 13 = 32

        // 2
        // 2 no
        // 0
        // 1
        // 2
        // 2
        // 1 no
        // 1
        // 1
        // 2

    }

    return 0;
}