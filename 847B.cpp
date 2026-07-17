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

    int n ; 
    cin >> n ;
    
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    // n can be 10 e 5 

    // cant just do n square


    // thinking 


    vector<vector<int>> ans ; 
    // alright

    // start inserting 

    // dont do n sq instead do log n for each query


    int sz = 0 ;

    for (int i = 0; i < n; i++) {
        
        int lo = 0 ;
        int hi = ans.size() ;
        // maybe

        // sequencence kinda ?? 
        // inc but

        while( lo !=  hi ){

            int mid  = lo + ( hi - lo )/ 2  ;


            if( ans[mid].back() <= arr[i]){
                hi = mid ;
            }else{
                lo = mid+1 ;
            }

        }
        if( lo == ans.size())
            ans.push_back( {arr[i]});
        else
            ans[lo].push_back( arr[i]) ;


    }


    for (int i = 0; i < ans.size(); i++) {
        for (int j = 0; j < ans[i].size(); j++) {
            cout<< ans[i][j] << ' '; 
        }
        cout << '\n' ;
    }

    

    



    return 0;
} 