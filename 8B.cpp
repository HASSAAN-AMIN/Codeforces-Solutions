/* 
                بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ   
    In the name of Allah, the Most Gracious, the Most Merciful.
*/
#include <iostream>
#include<vector>
#include<algorithm>
#include <set>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s ;
    
    int n = s.size() ;


    int x = 0 ;
    int y = 0 ;

    set<pair<int, int>> arr;

    arr.insert({0 , 0 }) ;
    for( char c : s){
        if( c == 'U')
            y++;
        else if( c == 'D')
            y--;
        if( c == 'L')
            x--;
        if( c == 'R')
            x++;
        pair<int , int> cry = { x ,y } ;
        if( arr.find(cry) != arr.end()){
            cout << "BUG" << '\n' ;
            return 0;
        }
        if(y > 0){
            if( arr.find({x , y-1})  != arr.end() && c != 'U'){
                cout << "BUG" << '\n' ;
                return 0;
            }
        }
        else{
            if( arr.find({x , y+1})  != arr.end() && c != 'D'){
                cout << "BUG" << '\n' ;
                return 0;
            }
        }

        if(x > 0){
            if( arr.find({x-1 , y})  != arr.end() && c != 'R'){
                cout << "BUG" << '\n' ;
                return 0;
            }
        }
        else{
            if( arr.find({x+1 , y})  != arr.end() && c != 'L'){
                cout << "BUG" << '\n' ;
                return 0;
            }
        }
        
        //cout << " x , y  is : " << x << ' ' << y << '\n' ;
        arr.insert(cry);

    }
    cout << "OK" << '\n' ;


    return 0;
} 