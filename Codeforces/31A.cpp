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

    // int t;
    // cin >> t;
    // while(t--){
        int n;
        cin >> n;
        vector<int> arr(n) ;

        for (int i = 0; i < n; i++) {
            cin >> arr[i] ;
        }
        int  x , y, z ;
        bool sus = false;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                for (int k = 0; k < n; k++) {
                    if(i != j && j != k && i != k) 
                        if( arr[i] == (arr[j] +arr[k])){
                            x =i+1;
                            y =j+1;
                            z =k+1;
                            sus =true;
                            break;
                        }
                }
                if(sus)
                    break;
            }
            if(sus)
                break;
        }
        if(sus)
            cout << x << ' ' << y << ' ' << z << '\n' ;
        else
            cout << -1 ;
    //}

    return 0;
}