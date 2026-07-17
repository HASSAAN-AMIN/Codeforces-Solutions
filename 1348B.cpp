/* 
                بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ   
    In the name of Allah, the Most Gracious, the Most Merciful.
*/
#include <iostream>
#include<vector>
#include<algorithm>
#include <set>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n  , k ;
        cin >> n >> k;

        vector<int> arr(n);

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        

        // if at any point 
        // whent the num is being removed
        // the same must be added
        // yeah 
        // else wise
        // the sum gonna change 
        
        // so technichally
        // arr should be 
        // repititon of the first k letters? 
        // ig ?

        // -1 in case
        // the distinct numbers > k 


        // oh wait we actually dont need to minimize 
        // the added numbers
        // do whatever  it says as many times

        set<int> s; 

        for (int i = 0; i < n; i++) {
            s.insert(arr[i]) ;
        }   

        if( s.size() > k){
            cout << -1 << '\n' ;
        }else{

            cout << n*k  << '\n' ; 
            
            

            for (int i = 0; i < n; i++) {

                for( int x : s){
                    cout << x <<  ' ' ;
                }
                for (int j = 0; j < k - s.size(); j++) {
                    cout << 1 << ' ' ; 
                    // cout << "k : " <<  k << '\n' ;
                    // cout << "s : " <<  s.size() << '\n' ;
                    // cout << "sz : " <<   k - s.size() << '\n' ;
                    
                }
            }


            cout << '\n' ;



        }

            
        
    }

    return 0;
}