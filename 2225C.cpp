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
        string a ,b ; 
        cin >> a >> b;  
        
        int ans = 0; 
        
        for (int i = 0; i < n; i++) {
            if(a[i] == b[i])
                continue;
            
            if((i+1 < n )&& (a[i] == a[i+1] )&& (b[i] == b[i+1])){
                i++;
                continue;
            }
            ans++;
        }
        cout << ans << '\n' ;
        
    }

    return 0;
}