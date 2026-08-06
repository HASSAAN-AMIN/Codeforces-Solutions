/* 
                بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ   
    In the name of Allah, the Most Gracious, the Most Merciful.
*/
#include <iostream>
#include<vector>
#include<algorithm>
#include <queue>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n ; 
    cin >> n ;

    int a;
    cin >> a ;
    queue<int> arr;
    for (int i = 0; i < a; i++) {
        int x ;
        cin >> x;
        arr.push(x) ;
    }

    int b;
    cin >> b;
    queue<int> brr;
    for (int i = 0; i < b; i++) {
        int x ;
        cin >> x;
        brr.push(x) ;
    }

    // so n is  be max  10 

    // we can stimulate 

    // and we can maintain a state
    // that if that state ever happens again
    // then hellnawww no way


    // so umm
    // // i was thinking 
    // queue<int> crr = brr;
    // queue<int> drr = arr;
    // if brr becomes this ever again so 
    // yeah
    // but is thta guranteed ?
    // that this would happen ? 
    // like are we sure that this cycle like
    // this would come ?
    
    // lets just assume yeah gut feeling yk

    int cnt = 0 ;
    while(  arr.size() != 0 && brr.size()!=0 ){
        if( cnt > 100000){
            cnt = -1;
            break;
        }
        cnt++;
        if( arr.front() >  brr.front()){
            int a =  arr.front();
            arr.pop();
            int b =  brr.front();
            brr.pop();
            arr.push(b);
            arr.push(a);
        }else{
            int a =  arr.front();
            arr.pop();
            int b =  brr.front();
            brr.pop();
            brr.push(a);
            brr.push(b);
        }

        // if( brr == crr && arr == drr){
        //     cnt = -1 ;
        //     break;
        // }
    }
    if( cnt == -1 )
        cout << cnt << '\n' ;
    else{
        if( arr.size() == 0)
            cout << cnt << ' ' << 2 << '\n' ;
        else
            cout << cnt << ' ' << 1 << '\n' ;
    }



    return 0;
}