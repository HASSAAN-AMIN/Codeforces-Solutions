/* 
                بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ   
    In the name of Allah, the Most Gracious, the Most Merciful.
*/
#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int arr[6] ;
    cin >> arr[0] >> arr[1] >> arr[3] >> arr[4] >> arr[2] >> arr[5] ;
    int brr[4] ;
    brr[0] = -1 ;
    for (int i = 1; i < 10; i++) {
        for (int j = 1; j < 10; j++) {
            for (int k = 1; k < 10; k++) {
                for (int l = 1; l < 10; l++) {
                    if(i == j || i == k || i == l || j ==k || j ==l || k == l)
                        continue;
                    if( i +j == arr[0])
                        if( k + l == arr[1])
                            if(i + l  == arr[2])
                                if(j + k == arr[5])
                                    if(i + k == arr[3])
                                        if(j +l == arr[4]){
                                            brr[0] = i ;
                                            brr[1] = j ;
                                            brr[2] = k ;
                                            brr[3] = l ;
                                        }
                                
                }
            }
        }
    }
    if( brr[0] == -1)
        cout << -1 << '\n';
    else{
        for (int i = 0; i < 4; i++) {
            cout << brr[i] << ' ';
        }
        cout << '\n' ;
    }

    return 0;
}