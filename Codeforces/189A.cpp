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

    int n , a ,b ,c;
    cin >>n >> a >> b  >>c ;
    //well the brute force is pretty simpple as
    // the limit is 4000 lets just not solve with 
    // that and try something smarter
    vector<int> dp(n+1 , -9999);
    dp[0] = 0; 
    for (int i=a; i<=n; i++)
        dp[i]=max(dp[i], dp[i-a]+1);
	for (int i=b; i<=n; i++) 
        dp[i]=max(dp[i], dp[i-b]+1);
	for (int i=c; i<=n; i++) 
        dp[i]=max(dp[i], dp[i-c]+1);

    
    cout << dp[n];


    return 0;
}