/* 
                بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ   
    In the name of Allah, the Most Gracious, the Most Merciful.
*/
#include <iostream>
#include<vector>
#include<algorithm>
#include <numeric>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a , b ,c  ; 
    cin  >> a >> b >> c  ; 


    int m ;
    cin >> m ;
    vector<int> arr ; 
    vector<int> brr ; 
    
    for(int i =0 ; i < m ; i++){
        int x ;
        string s;
        cin >>  x >> s;
        if( s[0] == 'U')
            arr.push_back(x);
        else
            brr.push_back(x);
    }
    sort( arr.begin()  , arr.end()) ;
    sort( brr.begin()  , brr.end()) ;

    a = min( a , (int)arr.size()) ;
    b = min( b , (int)brr.size()) ;

    vector<int> rem ;

    for (int i = a; i < arr.size(); i++) {
        rem.push_back(arr[i]) ;
    }
    for (int i = b; i < brr.size(); i++) {
        rem.push_back(brr[i]) ;
    }
    sort( rem.begin()  , rem.end()) ;
    c = min( c , (int)rem.size() ) ;

    cout << a + b +c << ' ' <<  accumulate( arr.begin() , arr.begin() + a , 0ll) + accumulate( brr.begin() , brr.begin() + b , 0ll)+ accumulate( rem.begin() , rem.begin() + c , 0ll)  << '\n'; 






    return 0;
}