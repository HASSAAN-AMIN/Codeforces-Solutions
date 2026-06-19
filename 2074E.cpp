/* 
                بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ   
    In the name of Allah, the Most Gracious, the Most Merciful.
*/
#include <iostream>
#include <cstdlib>
using namespace std;

int ask( int &i , int &j , int &k){
    cout << "? " << i <<' ' << j << ' ' << k << '\n' ;
    int x; 
    cin >> x ;
    return x;
}
void show( int &i , int &j , int &k){
    cout << "! " << i <<' ' << j << ' ' << k << '\n' ;
}

int main() {
    // ios::sync_with_stdio(false);
    // cin.tie(nullptr);
    // feel the aura when solving 1600 + interactive and commenting fast i/o

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int i = 1 ; 
        int j = 2 ;
        int k = 3 ;
        bool sus =false ;
        for (int ii = 0; ii < 75; ii++) {

            int a  = ask( i , j , k) ;

            if( a== 0 ){
                show( i , j ,  k) ;
                sus = true;
                break;
            }
            if( a == -1){
                cout << "What are you doing bruh ?\n";
                break;
            }
            // we need some randomness shi
            // to confuse your enemy(interpretter) first confuse yourself ahh problem
            // so if idk what triangle i am gonna choose
            // how would the interpretter know lol

            int r = rand() % 3;

            if(r == 0) 
                i = a;
            else if(r == 1) 
                j = a;
            else 
                k = a;
        }
    }

    return 0;
}