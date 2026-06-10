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

        int n, k;
        
        cin >> n >> k;
        
        string s;
        cin >> s;
        
        vector<int> pre(n + 1, 0);
        vector<int> suf(n + 1, 0);

        for (int i = 1; i < n +1; i++){
            pre[i] = pre[i - 1] ;
            if(s[i-1] == '(')
                pre[i]++ ;
        }
        for (int i = n - 1; i >= 0; i--){
            suf[i] = suf[i+1] ;
            if(s[i] == ')'       )
                suf[i]++;
        }
        
        int v = n + 1, ii = 0;
        for (int i = 0; i < n +1; i++) {
            int f = pre[i] + suf[i];
            int cur = max(0, f - k);
            if (cur < v) {
                v = cur;
                ii = i;
            }
        }
        
        string ans(n, '0');
        int give = pre[ii] + suf[ii] - v; 
        
        for (int i = 0; i < ii && give > 0; i++){
            if (s[i] == '(') { 
                    ans[i] = '1'; 
                    give--; 
            }
        }
        for (int i = n - 1; i >= ii && give > 0; i--){
            if (s[i] == ')') { 
                ans[i] = '1'; 
                give--; 
            }
        }
        
        cout << ans << '\n';
        
    }

    return 0;
}

