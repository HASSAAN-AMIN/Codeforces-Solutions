/* 
                بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ   
    In the name of Allah, the Most Gracious, the Most Merciful.
*/
#include <iostream>
#include<vector>
#include<algorithm>
#include <unordered_map>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s ;

        // oh god 
        // 3 hours insane on one problem 
        
        if( !(n&1) ){
            unordered_map<char , int >  pi ;
            unordered_map<char , int > shu ;
            
            for (int i = 0; i < n; i++) {
                if(i&1)
                    shu[s[i]]++;
                else
                    pi[s[i]]++;
            }
            int ans = n ;
            int cnt = 0 ;
            for( auto x : pi)
                cnt = max( cnt  , x.second); 
            
            ans -= cnt;
            cnt = 0 ;
            
            for( auto x : shu)
                cnt = max( cnt  , x.second); 
            
            ans -= cnt ;
            cout << ans << '\n' ;         
        }else{

            vector< vector<int> > pre( 2 , vector<int>(26));
            vector< vector<int> > suf( 2 , vector<int>(26));
            
            for (int i = n-1 ; i >= 0 ; i--){
                suf[i%2][s[i]-'a']++; 
            }
            int ans = n ;

            for (int i = 0; i < n; i++) {
                suf[i%2][s[i]-'a']--;

                int uhh[2] = {0, 0};


                for (int j = 0; j < 26; j++) {
                    
                    uhh[0] = max( uhh[0] , suf[1][j] + pre[0][j] ) ;
                    uhh[1] = max( uhh[1] , suf[0][j] + pre[1][j] ) ;

                }

                pre[i%2][s[i]-'a']++;

                ans = min( ans , n - 1 - uhh[0] -uhh[1] ) ;
            }
            cout << ans +1 << '\n' ;
        }

    }

    return 0;
} 