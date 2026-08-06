/* 
                بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ   
    In the name of Allah, the Most Gracious, the Most Merciful.
*/
#include <iostream>

using namespace std;
long long hmm(long long n){
    if (n == 2 || n == 3)
        return n;

    if (n % 2 == 0 )
        return 2;
    if( n % 3 == 0)
        return 3;
    
    for (long long i = 5; i *i<=n; i = i + 2)
        if (n % i == 0 )
            return i;

    return n;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // int t;
    // cin >> t;
    // while(t--){
    //     int n;
    //     cin >> n;
        
    // }

    long long n ;
    cin >> n; 

    //1. if n=0 , then end algorithm;
    //2. find the smallest prime divisor d of n;
    //3. subtract d from n and go to step 1

    // let say 100
    // 100 -2
    // 98 -2
    // 96 
    
    // 94 lol it goes on until 2  then 0
    // so we wait for it to be even ?
    // since num gonna be odd
    // so the prime will also be odd
    // then odd - odd gonna be even 
    // and we do this shi
    // nice nices
    // how many 2's in a num let say k where k is even 
    // is ofc k/2
    long long  get;
    // ans gonna be  1 + (n -get)/2
    // ofc
    get = hmm(n) ;
    
    
    cout << 1 +( n- get) / 2  << '\n'; 


    return 0;
} 