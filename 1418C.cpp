/* 
                بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ   
    In the name of Allah, the Most Gracious, the Most Merciful.
*/
#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    // int ttt = 0 ;
    while(t--){
        //ttt++;
        int n;
        cin >> n;


        vector<int> arr(n);

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }


        // if( ttt ==55 ){
        //     cout << n ;//<< arr[0] << arr[1] << arr[3] << arr[3] << arr[4] << '\n' ;
        //     break;
        // }

        // 1 0 1 1 0 1 1 1

        // im thinking of some greedy strategy 
        // there must be one

        // what if we let the friend kill only if there is 0
        // and we always kill 2 ?
        // but if i got 10 ez just kill 1
        // but what if i got  0  1 then the friend
        // could killed that why i am killing it
        // so in that case
        // wait that can happen?
        // if and only if he kills a 
        // 0 0 case so friend should always take down both
        // what if it was  0 0 0 
        // then in both  like poss combs
        // we have to one
        // even if i take them its good
        int cnt = 0 ;
        // why failded on this
        // 0 1 0 1
        // fren takes down one
        // i take down 1
        // awwwww i get it
        //


        // now on this
        // 5
        // 0 0 1 1 1 


        // this case 
        // 0 0 0 1 1 


        int i = 0 ;
        bool turn = false;
        while( i  < n){
            if(turn){
                i++;
                if(i < n && arr[i] == 1)
                    i++;
                turn = !turn;
            }else{ 
                if(arr[i] == 1){
                    cnt++;
                }
                i++;
                if(i < n && arr[i] == 0) {
                    i++;
                    if(i < n && arr[i] == 0) 
                        i--;
                }
                turn = !turn;
            }
        }
        cout << cnt  << '\n' ;
    }
    

    return 0;
}
// 0 1 0 1


/*
2
2
2
2
1
0
*/
/*
2
2
2
2
1
0
*/