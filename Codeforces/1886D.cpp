/* 
                بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ   
    In the name of Allah, the Most Gracious, the Most Merciful.
*/
#include <iostream>
#include <cmath>
#include <iomanip>


using namespace std;
double dist( int x  , int y , int a , int b ){
    return sqrt( (x-a)*(x-a) + (y-b)*(y-b)) ;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int px , py , ax , ay , bx , by ;
        cin >> px >> py
            >> ax >> ay
            >> bx >> by ;
        double oa = dist(0 ,0 , ax , ay) ;
        double ob = dist(0 ,0 , bx , by) ;
        double pa = dist(px ,py , ax , ay) ;
        double pb = dist(px ,py , bx , by) ;
        double ab = dist(bx ,by , ax , ay) ;
        
        double ans = 10e8;

        ans = min(
                    min(
                        min(
                            min(ans,
                                    max(oa,pa)) 
                            ,max(ob,pb))
                        ,max(ob,
                            max(ab/2.0,pa))
                        )
                    ,max(oa,
                        max(ab/2.0,pb)));
    
        cout << setprecision(12) << fixed << ans << '\n';
        
    }

    return 0;
}