/* 
                بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ   
    In the name of Allah, the Most Gracious, the Most Merciful.
*/
#include <iostream>
#include <set>
#include <climits>


#include <unordered_map>



using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // int t;
    // cin >> t;
    // while(t--){
    //     int n;
    //     cin >> n;
        
    // }


    int n ;
    cin >> n; 

    string s ;
    cin >> s ;

    set<char> sett; 

    for( char &c : s)
        sett.insert(c);

    int sz = sett.size() ;
   // cout << sett.size()  << '\n';


    int l  = 0 ;

    unordered_map< char , int> freq ;

    int cnt = 0;
    int ans = INT_MAX ;
    for (int i = 0; i < n; i++) {
        
        freq[s[i]]++;

        if( freq[s[i]] == 1)    
            cnt++;


        while( cnt == sz){

            ans = min( ans , i-l+1) ;

            freq[s[l]]--;

            if( freq[s[l]] == 0)    
                cnt--;

            l++;
        }


    }

    cout << ans << '\n' ;




    return 0;
}