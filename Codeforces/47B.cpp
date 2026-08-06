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

    char a[4] , b[4] , c[4];
    cin >> a >> b >> c ;

    string arr[6] = {"ABC" , "ACB" , "BAC" , "BCA" , "CAB" , "CBA"};
    //char out[3] = { '\0' , '\0' , '\0'};

    int ans = -1 ;

    if(a[1] == '<'){
        a[1] = a[2];
        a[2] = '\0';
    }else{
        a[1] = a[0];
        a[0] = a[2] ;
        a[2] = '\0';
    }
    if(b[1] == '<'){
        b[1] = b[2];
        b[2] = '\0';
    }else{
        b[1] = b[0];
        b[0] = b[2] ;
        b[2] = '\0';
    }
    if(c[1] == '<'){
        c[1] = c[2];
        c[2] = '\0';
    }else{
        c[1] = c[0];
        c[0] = c[2] ;
        c[2] = '\0';
    }
    // cout << a << '\n' ;
    // cout << b << '\n' ;
    // cout << c << '\n' ;
    
    for(int i = 0 ; i < 6 ; i++){
        string s = arr[i];

        int pos[3];
        pos[0] = s.find('A');
        pos[1] = s.find('B');
        pos[2] = s.find('C');

        bool ok = true;

        if(!(pos[a[0]-'A'] > pos[a[1]-'A'])) ok = false;

        if(!(pos[b[0]-'A'] > pos[b[1]-'A'])) ok = false;

        if(!(pos[c[0]-'A'] > pos[c[1]-'A'])) ok = false;

        if(ok){
            ans = i;
            break;
        }
    }


    if(ans == -1)
        cout << "Impossible\n";
    else{
        string res = arr[ans];
        reverse(res.begin(), res.end());
        cout << res;    
    }


    return 0;
}