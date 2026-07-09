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
        
        string s;
        string t; 

        cin >> s >> t ;

        int arr[3] = {0};


        for (int i = 0; i < n; i++) {
            arr[ s[i]- 'a']++;
            arr[ t[i]- 'a']--;
        }

        bool sus = false ;


        for (int i = 0; i < 3; i++) {
            if(arr[i] != 0 )
                sus = true ;
        }


        if( !sus ){
            string a , b ;


            vector<int> arr ;
            vector<int> brr ;
            for (int i = 0; i < n; i++) {
                if(s[i] != 'b')
                    a += s[i] ;
                else    
                    arr.push_back(i);
                if(t[i] != 'b')
                    b += t[i] ;
                else    
                    brr.push_back(i);
            }

            if( a != b){
                sus = true; 
                // cout << " a : " << a << '\n' ;   
                // cout << " b : " << b << '\n' ;   
            }
            vector<int> sa ;
            vector<int> sc ;
            vector<int> ta ;
            vector<int> tc ;
            for (int i = 0; i < n; i++) {
                if( s[i] == 'a')
                    sa.push_back(i) ;
                if( s[i] == 'c')
                    sc.push_back(i) ;
                if( t[i] == 'a')
                    ta.push_back(i) ;
                if( t[i] == 'c')
                    tc.push_back(i) ;
            }


            for (int i = 0; i < sa.size(); i++) {
                if(sa[i] > ta[i])   
                    sus = true;
            }
            for (int i = 0; i < sc.size(); i++) {
                if(sc[i] < tc[i])   
                    sus = true;
            }




        }



        if( sus )
            cout << "NO" << '\n' ; 
        else
            cout << "YES" << '\n' ;


    }

    return 0;
}