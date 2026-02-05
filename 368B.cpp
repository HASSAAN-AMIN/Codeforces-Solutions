/* 
                بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ   
    In the name of Allah, the Most Gracious, the Most Merciful.
*/
#include <iostream>
#include<vector>


using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n  , m;
    cin >> n >> m;
    vector<int>arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i] ;
    }
    vector<int> dp(n+1 , 0); //distinct ah elements
    // +1 for just not adding xtra logic for checking next
    vector<bool>sus(100001 ,0);
    for(int i = n -1 ; i >= 0 ; i--){
        if(!sus[arr[i]]){
            sus[arr[i]] = true;
            dp[i] = dp[i+1] + 1;
        }else{
            dp[i] = dp[i+1];
        }
    } 
    while(m--){
        int x ;
        cin >> x;
        cout << dp[x-1] << '\n';
    }


    return 0;
}