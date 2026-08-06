/* 
                بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ   
    In the name of Allah, the Most Gracious, the Most Merciful.
*/
#include <iostream>
#include <numeric>


using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int a , b , c ;
        long long m ;
        cin >> a >> b >> c >> m ;

        // hmm when the question said
        // a 2a 3a 4a 
        // b 2b 3b 4b 
        // c 2c 3c 4c
        // it automatically shows that its related to somewhat gcd and lcm

        // hmm 
        // O(n) isnt possible coz  m is  <= 10^17
        

        // hmm
        // long long ans =  0 ;


        long long abc = lcm( (long long)a , lcm( (long long)b , (long long)c )) ;
        long long lab = lcm( (long long)a , (long long)b );
        long long lac = lcm( (long long)a , (long long)c );
        long long lbc = lcm( (long long)b , (long long)c );
        // cout << " lab is : " << lab << '\n' ;

        long long a_t = m/a; 
        long long a_c = m /lac; 
        long long a_b = m /lab;
        a_t -= (a_b + a_c );
        a_t += m/abc  ; // these are the days worked alone
        // cout << "abc is :" << abc << '\n' ;
        // cout << "Final a_t is :" << a_t << '\n'  ;
        // cout << " a_b is : " << a_b << '\n' ;
        // cout << " a_c is : " << a_c << '\n' ;
        // cout << " a_t is : " << a_t << '\n' ;
        a_t *= 6 ;
        a_t += 3*(a_b+ a_c - 2*(m/abc) );
        a_t += 2*(m/abc) ;

        long long b_t = m/b; 
        long long b_a = m /lab;
        long long b_c = m /lbc; 
        b_t -= b_a + b_c ;
        b_t += m/abc  ;
        b_t *= 6 ;
        b_t += 3*(b_a+ b_c - 2*(m/abc) );
        b_t += 2*(m/abc) ;


        long long c_t = m/c; 
        long long c_b = m /lbc;
        long long c_a = m /lac; 

        c_t -= c_b + c_a ;
        c_t += m/abc  ;
        c_t *= 6 ;
        c_t += 3*(c_b+ c_a - 2*(m/abc) );
        c_t += 2*(m/abc) ;

        
        
        cout <<  a_t << ' ' << b_t  << ' ' <<  c_t << '\n' ;
    }

    return 0;
}