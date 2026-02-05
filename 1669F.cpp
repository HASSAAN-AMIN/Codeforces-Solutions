/* 
                بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ   
    In the name of Allah, the Most Gracious, the Most Merciful.
*/
#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;

int search(vector<int>&arr , int l , int r , int tgt){
    int mid = 0;
    while( l <= r ){
        mid = (l + r) /2 ;

        if(arr[mid] == tgt)
            return mid;
        else if(arr[mid] > tgt)
            r = mid -1;
        else
            l = mid +1 ;
    }
    return -1 ;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n) ;
        for (int i = 0; i < n; i++) {
            cin >> arr[i] ;
        }
        // 7 3 20 5 15 1 11 8 10
        // as we go from left to right 
        // as well from right to left also

        // what i get a logic is of the prefix sum hmm
        // find prefix sums from right 
        // then from left 
        // in different arrays ahn
        // when we could umm traverse one from left and right
        // but this would be n^2 isnt it ?
        // tags said binary serch
        // since it would be sorted ofc no neg weights
        // hmm
        // so binary search  would take log n 
        // and then n for log n  ~ n log n nice nice

        // whats difficult is to implement this 
        // but dw we will make chunks and solve it

        vector<int>gold(n);
        vector<int>digger(n);
        
        
        gold[0] = arr[0];
        for (int i = 1; i < n; i++) {
            gold[i] = gold[i-1] + arr[i] ;
        }
        digger[n-1] = arr[n-1];
        for (int i = n-2; i >= 0; i--) {
            digger[i] = digger[i+1] + arr[i] ;
        }

        // we got gold digger  arrays which stores prefix sums

        // lets iterate from diggers

        // we need to iterate diggers from left and perform a binary search 
        // on gold if found then goood find more 
        // else  if end reached  and nothing changes still no issue issok bacha

        int ans = - 1 ;

        for (int i = n -1 ; i >= 0; i--) {
            
            int l = 0; 
            int r = i -1;
            int tgt = digger[i] ;
            int got = search( gold , l , r , tgt);
            // "got" has a index but toffees how many ?
            // lemme tell toffes =  (got +1 ) + (n - i) = n+ got - i + 1
            if(got != -1)
                ans = max(ans , n + got - i + 1 );
        }
        if(ans == -1)
            ans = 0 ;
        cout << ans << '\n' ;
    }

    return 0;
}