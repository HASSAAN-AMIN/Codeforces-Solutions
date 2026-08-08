/* 
                بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ   
    In the name of Allah, the Most Gracious, the Most Merciful.
*/
#include <iostream>
#include<vector>
#include<algorithm>
#include<climits>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int x , y ;
        cin >> x >> y;
        long long ans = LLONG_MAX;
        int xx = 0 ;
        int yy = 0 ;
        int sz = 0;
        for (int n = 1; n <= 20000 ; n++) {

            // if x cord is gonna v
            // y cord gonna  sum - v
            
            // int dist = ( x - v)^2 + (y  - sum +v )^2 
            // minimize 
            //  v-x = -y+sum-v
            // v = (x -y +sum)/2
            
            long long sum = (1ll*n*n+n)/2 ;
            long long v = x - y + sum ;
            bool sus =false ;
            if(v%2 == 1 )
                sus = true;
                
            v /= 2 ;
            long long p = v;
            long long q = sum-v;

            if (p < 0) {
                p = 0;
                q = sum;
                sus = false;
            }

            if (q > y) {
                p = sum - y;
                q = y;
                sus = false;
            }

            if (p > x) {
                p = x;
                q = sum - p;
                sus = false;
            }
            

            if( p <= x && q <= y){

                if(  ((x-p)*(x-p)+ (y-q)*(y-q)) < ans){
                    ans =  ((x-p)*(x-p)+ (y-q)*(y-q));
                    xx =p;
                    yy =q;
                    sz =  n; 
                }
                //ans = min( ans , ((x-p)*(x-p)+ (y-q)*(y-q))) ;
                
                // cout << "p is :  " << p << '\n' ;
                // cout << "q is :  " << q << '\n' ;
                // cout << "now ans is : " <<  ans << '\n';

            }
            if(sus ){
                p++;
                q = sum -p ;
                if( p <= x && q <= y){
                    if(  ((x-p)*(x-p)+ (y-q)*(y-q)) < ans){
                        ans =  ((x-p)*(x-p)+ (y-q)*(y-q));
                        xx =p;
                        yy =q;
                        sz =  n; 
                    }
                    // cout << " here \n"; 
                    // cout << "p is :  " << p << '\n' ;
                    // cout << "q is :  " << q << '\n' ;
                    // cout << "now ans is : " <<  ans << '\n';
                }
            }
        }
        // cout << ans << '\n' ;
        // cout << "(x, y) : " << xx << ' ' << yy  << '\n';

        string s = "";

        for (int i = 0; i < sz; i++) {
            s += 'Y' ;
        }


        for (int i = sz; i >= 1; i--) {
            if (xx >= i) {
                s[sz - i] = 'X';
                xx -= i;
            }
        }

        cout << s << '\n';

        
    }

    return 0;
}