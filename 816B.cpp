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

    // int t;
    // cin >> t;
    // while(t--){
        int n , k , q;
        cin >> n >> k >> q;

        // vector<int> arr(n);

        // for (int i = 0; i < n; i++) {
        //     cin >> arr[i];
        // }

        vector<long long > rec (200003, 0) ;// hmm
        int x , y  ;
        //vector< vector<int> > brr(n , vector<int>(2));
        for (int i = 0; i < n; i++) {
            //cin >> brr[i][0] >> brr[i][1];
            cin >> x >> y ;
            rec[x]++;
            rec[y+1]--;
        }  
    
        for (int i = 1; i < 200003; i++) {
            rec[i] += rec[i-1];
        }
        // we got prefix sum

        // willl use  k 
        // greater than k will become 1
        // rest all -1


        for (int i = 1; i < 200001; i++) {
            if(rec[i] >= k)
                rec[i] = 1 ;
            else
                rec[i] = 0 ;
        }

        // build prefix sum again lol
        for (int i = 1; i < 200003; i++) {
            rec[i] += rec[i-1];
        }

        // and now  
        // just answer queries ?

        int l , r ;
        while(q--){
            cin >> l >> r ;

            cout << rec[r] - rec[l-1] << '\n'; 


            
        }



        
   // }

    return 0;
}