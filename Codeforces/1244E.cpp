/* 
                بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ   
    In the name of Allah, the Most Gracious, the Most Merciful.
*/
#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool foo( vector<int>& arr , vector<long long>&  pre,   long long k , int n , int d){
    // alr 

    //hmmmmmmmmm 

    // first check for ?

    // can we  acheive d ? 


    // for all n  
    for (int i = 0; i < n; i++) {
        // for all n 

        // if you are the choosen i
        {
            int l = arr[i] ;
            int r = l + d;

            long long left =  1ll*i * l - pre[i];

            int p = upper_bound(arr.begin(), arr.end(), r) - arr.begin();

            long long right = (pre[n] - pre[p]) -   1ll*(n - p) * r;

            if (left + right <= k) 
                return true;
        }

        {
            int r = arr[i], l = r - d;

            long long right = (pre[n] - pre[i + 1]) -  1ll*(n - i - 1) * r;

            int p = lower_bound(arr.begin(), arr.end(), l) - arr.begin();
            long long left =  1ll*p * l - pre[p];

            if (left + right <= k) 
                return true;
        }
        
        


    }

    return false ;


}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // int t;
    // cin >> t;
    // while(t--){
        
        int n;
        cin >> n;

        long long  k ;
        cin >>k ;
        
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        // observations

        // ig the num should be  like both of em
        // lies in [ crnt max , crnt min  ]  range
        // why ?? 
        // let ai  be any 
        // then  for all ai if its > crnt max 
        // then all should go up 
        // but but but 
        // thats cleearly  > if smth inside
        // ykkykykykyyykykyky

        //   n < 1e5   k < 1e14
        //  cant even o of n on k 
        // hmm


        // well must first sort 
        // sort in o ( n log n )

        sort( arr.begin() , arr.end() ) ;

        // hmm

        // so like we check at all  like nums like 
        // for evvery num whats like possible ?
        // like i picked from USACO Binary Search Sections
        // so like its a bianry search section ofc
        // ofc 
        // like it must be a like monotonic sequence
        // like 
        // 0 0 0 0 0 1 1 1 1 1 1 
        // hmm  ????????????????
        // 

        // so its like smth that
        // let say  [  L   R  ]
        // below from l comes to L
        // up from r reduce to R

        // so like one of them must be from array
        // eithere the L or the R
        // because by contradiction
        // we can surely show that
        // we can change all shi by like shiftitng left
        // right proof for reader ahhhh


        // uhhhhhhhhhh 
        // my braain is fryingggggggg

        // oh i am getting smth 


        // so we do bs


        int lo = 0 ;  // as low difference as could
        int hi = arr[n-1] - arr[0] ;
        
        
        // alr 

        // i got it

        // the prefix sum
        // for an let say i what prefix i would choose ?
        vector< long long>pre( n +1  , 0 ) ;
        // first ofc 0 



        for (int i = 0 ; i < n; i++) {
            pre[i +1 ] = pre[i]  +   arr[i] ;
        }

        // so this would tell how much we need   from  prev r 



        int mid = -1 ; 
        int cnt  = 0 ;
        while( lo < hi ){
            cnt++;
            mid = lo + (hi-lo)/2 ;
            // so we made it to the classical
            // 0 0 0 0 0 0 1 1 1 1 1 1 
            // ah prob
            if( foo(arr , pre  , k , n , mid )){
                hi = mid;
            }else{
                lo = mid+1  ;
            }
        }   



        // for (int i = 0; i < n; i++) {
        //     cout << foo(arr , pre , suf, k , n , i ) << ' ' ;
        // }
        // cout << '\n' ;
        // cout << "Cnt is : "<< cnt << '\n'; 
        cout << lo << '\n' ; 

    
        





        
   // }

    return 0;
}