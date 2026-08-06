/* 
                بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ   
    In the name of Allah, the Most Gracious, the Most Merciful.
*/
#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool same( int x , int y) {
    if( x == 0 || y == 0)
        return true;
    if( x > 0  && y > 0 )
        return true;
    if( x < 0  && y < 0 )
        return true;
    return false; 
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n + 1 ) ; 
        arr[0] = 0 ; 
        // theres  a reason for that (ig)
        for (int i = 1; i <= n; i++) {
            cin >> arr[i];
        }
        // what we could do is brute force for 2 power n 
        // but we dont do that
        // how about dp  ?

        // dp here how ?
        // ummmmmmmmmmm
        // yeah butttttttttttttt

        // thinking ...

        /*
        
        3
        5
        -1 -2 -3 -5 -4
        5
        -1 -2 3 -5 4
        4
        5 7 10 19

        */       
        vector <int> ans ; 
        // uh i get it 
        //  ( ig )
        
        // for (int i = 1; i <=  n; i++) {
        //     if( (arr[i-1])  > -(arr[i-1]) ){
        //         arr[i] -= arr[i-1] ;
        //         ans.push_back(i-1) ;
        //         //arr[i] = -arr[i] ;
        //     }else{
        //         arr[i] += arr[i-1] ;
        //     }
        // }

        // ik smth else cool ( ig )
        bool sus = false ; 
        for (int i = n; i >= 1; i--){
            if (sus){
                (arr[i]) = -(arr[i]);
            }
            if ((arr[i]) > 0){
                ans.push_back(i);
                sus = !sus; 
            }
        }

        cout <<  ans.size()  << '\n' ;
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i]  << ' ' ;
        }
        cout << '\n' ;
        
    }

    return 0;
}
/*

3
5
-1 -2 -3 -5 -4
5
-1 -2 3 -5 4
4
5 7 10 19

0

1
3

4
1 2 3 4 



*/
