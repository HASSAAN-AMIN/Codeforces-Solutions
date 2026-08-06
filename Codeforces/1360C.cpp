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
        vector<int> arr (n) ;    
        for (int i = 0; i < n; i++) {
            cin >> arr[i] ;
        }
        // how we define  similar
        // there differnce is 1 
        // or 
        // their parity is same
        // hmm


        // we need to check that  can we make pairs or not
        // hmm
        // 5q +5q
        //
        // what we can observe is that
        // if odd count == even count
        // or or 
        // wait instead 
        // the parity difference could be atmost 1 
        //  why ?
        // bczzzz  if greteer than 1 they could pair up
        // so this means we just need to check that there must exist
        // either 1 consecutive  or all paraties same

        // ez pz lemoon squeezy
        int odd = 0 , even = 0;
        for (int i = 0; i < n; i++) {
            if(arr[i] % 2 ==0 )
                even++;
            else
                odd++;
        }
        // we got cnts here
        // noww what 
        bool sus = false;
        if((even%2 == 0) && (odd%2 ==0)){
            sus = true;
        }else{
            // if either one is odd

            // we need to check that consecutive exist or not
            //lets sort first
            sort(arr.begin() ,arr.end()) ;
            for (int i = 0; i < n -1 ; i++) {
                if(arr[i] + 1 == arr[i+1]){
                    sus = true;
                    break;
                }
            }
        }
        if(sus){
            cout << "YES" << '\n' ;
        }else{
            cout << "NO" << '\n' ;
        }
        // less goo 

    }

    return 0;
}


// 7

// 4
// 11 14 16 12 tis ok

// 2
// 1 8 tis ok

// 4
// 1 1 1 1  tis ok
 
// 4
// 1 2 5 6 tis  ok 

// 2
// 12 13 tis ok

// 6
// 1 6 3 10 5 8 tis ok

// 6
// 1 12 3 10 5 8
// wait what no no its right
// 1 3  5 8 10 12


// YES
// NO
// YES
// YES
// YES
// YES
// NO
