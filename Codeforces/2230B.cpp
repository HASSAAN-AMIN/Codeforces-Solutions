/* 
                بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ   
    In the name of Allah, the Most Gracious, the Most Merciful.
*/
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        // ez ig 

        // for divisbile by 4
        // last 2 digits must be div 4 right
        // 04 08 12 16 20 24 28 32 39 40 44 ...
        // but only digs are  1 2 3 4 
        // so no chance only remains
        // 4 12 32
        // so 
        // cnt of :
        //      remove all 4s
        //      remove min( 1 , 2) of ones before 2 ?
        //      and 32 shi
        // ig
        // no even before odd
        // pre post shi to check all

        string s ;
        cin >> s;

        int od = 0;
        int ev = 0; 

        for(char c  : s){
            if(c == '1' || c == '3')
                od++ ;
        }
        int ans = od ;
        for(char c : s){
            if( c == '2')   
                ev++;
            else if( c  == '1' || c == '3')
                od--;
            
            ans = max( ans , ev +od) ;

        }
        
        cout << s.size() - ans << '\n' ;


    }

    return 0;
}