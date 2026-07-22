/* 
                بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ   
    In the name of Allah, the Most Gracious, the Most Merciful.
*/
#include <iostream>
#include <string>
#include<vector>
#include<algorithm>


using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int m ,s;
    cin >> m >> s;
    // length m , sum of digits s
    // 100 lenght num no integer should be taken    
    // instead gonna use strings
    string a = "" ; 

    if( m== 1 && s == 0){
        cout << 0 << ' ' <<  0 << '\n' ;
        return 0 ; 
    }
    if( s == 0 || m*9 < s){
        cout << -1 << ' ' << -1 << '\n' ;
        return 0 ; 
    }
    int sum  = 0 ;    
    for (int i = 0; i < m; i++) {
        int fake  = sum  ;
        int j = 9;
        for (; j >=0 ; j--) {
            char c = j + '0' ; 
            if( fake +  j > s )
                continue;
            a += c ;
            break; 
        }
        sum += j;
    }
    // well ik like the other wont always be  reverse
    // like it sseeems like that but that inst the case
    // we gotta do for that also

    // like len = 3 sum  = 3
    // max gonna be 300 ofc
    // but min gonna be 1 1 1
    // yeah so like we have to like
    // start filling the biggies in end 
    // end spam 1s
    // but biggies and 1 relaiton we have to make smth

    // hmm

    // alright im back

    // eyah so what was i thninkging

    string b = "" ;

    //b+= '1' ;
    for (int i = 0; i < m; i++) {
        b += '0'; 
    }
    // now from end 
    // like 
    // int rem = s-m;

    //  i have now a  nasty idea

    // maybeeee
    // if we do smth like
    //  for the  like R  - {[0]} string
    // we make it as max as possible
    // then reverse it 
    // and [0] gonna be 1

    // but for what consraints

    // ig like 
    // 
    int mm = m-1 ;
    int ss ; // trikcy

    ss = s -1  ;

    // why am i so smart
    while( mm*9 < ss ){
        ss--;
    }
    //cout << "SS is : " << ss << '\n' ; 

    string c  = "";
    {
        int sum  = 0 ;    
        for (int i = 0; i < mm; i++) {
            int fake  = sum  ;
            int j = 9;
            for (; j >=0 ; j--) {
                char d = j + '0' ; 
                if( fake +  j > ss )
                    continue;
                c += d ;
                break; 
            }
            sum += j;
        }
    }
    b[0] = ( s -ss) + '0' ;
    reverse(c.begin() , c.end()) ;
    for (int i = 0; i <m-1; i++) {
        b[i+1] = c[i];
    }



    







    //////////////////////////////////////////////////////////////////////
    ////////////////////////// wrong  below //////////////////////////////////
    //////////////////////////////////////////////////////////////////////
    // now if rem is negative it measn
    // we gotta make from end 0 
    // or like smth like that


    // for( int i = m-1 ; i >= 0 ; i--){
    //     if( rem == 0 )
    //         break;
    //     else if ( rem > 0 ){
    //         int x  = min( 8 , rem) ;
    //         // yeah like ig bro its that
    //         // 1 already there so when we remove that we get 1 extra
    //         // so like that
    //         b[i] = x+ '0' ; 
    //         rem -= x ;// if it was like 10s smthe it gonna still be big
    //         //else it gonna become 0 and then in next time its gonna die 
    //     }else{
    //         // let say rem = -1 from start 
    //         // it means one one is extra
    //         // so just remove that bro
    //         // ig 
    //         b[i] = '0' ;
    //         rem++;
    //     }
    // }

    // we still can reach impossible state
    // if 
    //



    //////////////////////////////////////////////////////////////////////
    ////////////////////////// wrong  up //////////////////////////////////
    //////////////////////////////////////////////////////////////////////

    // if( rem != 0 )
    //     cout << -1 << ' ' << -1 << '\n';
    // else
        cout << b <<  ' ' << a << '\n' ;
    


    // cout << a << '\n' ;

    
    return 0;
} 