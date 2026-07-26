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
        
        int n  , k  , m ;
        cin >> n  >> k >> m ;


        // thinking 

        // alrigth length  is n 

        // k consecutive elemetns have sum div by m

        // what if we throw all m ?
        // oh so for smaller sub arrays cant be div by m
        // alright 
        // what about throwing prime factors of m ?
        // yeah ig 
        // but can we make them cyclic

        // let say  m = a* b *c* d 
        // hmmm
        // and k is like 4 
        // a b c d a b c d 
        //   yeah sure we can lol

        // just do it ?
        // what if m is prime ?
        // hmm
        // o h why i  was thinking * it was + lol
        // so like umm
        // m = m/2 + m/2 
        // or m = 1 2 ... (kth one is gonna be like) m-k+1


        // should i test it ?
        // hmm --villager

        //what about the no case ?
        // 6 4 3
        // n k m 
        // if k > m ?
        // yeah ig 



        if( k > m){
            cout << "NO"  << '\n' ;

        }else{
            cout << "YES" << '\n' ;

            vector<long long> ans(k) ;
            for (int i = 0; i < k-1; i++) {
                ans[i] = i+1 ;
            }
            // 1 2 3 ..   = m  ==? ()

            // (k-1)(k-2)/2 + y = m
            // m = 1+ 1+ 1+ 1 .. 
            // m => m-k+1
            ans[k-1] = m- (k-1)*(k)/2ll  ;


            // what could have gone wron

            // actually we dont always need to do that  like for all l 
            // and r

            // do it once and then later ?
            // m+1 spam ?
            // but that gonna sum to m*l
            // when ? 
            // after m times
            // but k <= m


            // still wrong

            // is k > m possible ?
            // umm
            //  if k is bigger than m
            // then it would be like not possible ofc
            // like idk but yeah

            // i think  m+1 is wrong
            // it could interact with previous vals

            // it should be m-1 ig
            // m could be 1

            //  n  k  m
            //  n  4  4 
            // 1 2 3 3 3


            // this is wrong maybe 
            // for only like at kth position it should be like  making it 
            //  just use to make at  k

            // for (int j = 0; j < k && j +i-1 < n; j++) {
            //     cout << ans[j] << ' '; 
            // // }
            // for (int j = 0; j < k ; j++) {
            //     cout << ans[j] << ' '; 
            // }

            for (int i = 0; i < n; i++) {
                if( i == k -1)
                    cout <<  m-k+1 << ' ' ;
                else
                    cout << 1 << ' ' ;
            }
            cout << '\n' ;
        }


        // lessg oooooooo


        
    }

    return 0;
}


// light gone


/*

Input
4
1 1 1

5 3 5

2 2 1000000000
6 4 3


Output
YES
1 

YES
1 2 3 1 2 3 


YES
1 999999999 
NO



Checker Log
wrong answer minimal good length is 2, expected 3 (test case 2)

*/