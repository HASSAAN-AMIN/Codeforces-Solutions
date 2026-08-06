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
    while(t--){
        int n;
        cin >> n;

        vector<int> arr(n);

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        vector<int> z(n);
        vector<int> o(n);
        vector<int> t(n);


        z[0] = (arr[0]== 1);
        o[0] = (arr[0]== 2);
        t[0] = (arr[0]== 3);

        for (int i = 1; i < n; i++) {
            z[i] = z[i-1] + (arr[i]==1) ;
            o[i] = o[i-1] + (arr[i]==2) ;
            t[i] = t[i-1] + (arr[i]==3) ;
        }

        bool sus = false;


        for (int i = 0; i < n; i++) {
            if( z[i] >= (o[i] + t[i]) ){
                for (int j = i+1; j < n; j++) {
                    if((z[j] + o[j] -z[i] - o[i])>= (t[j] - t[i])){
                        // cout << "z  :" << z[j] << '\n' ;
                        // cout << "o  :" << o[j] << '\n' ;
                        // cout << "t  :" << t[j] << '\n' ;
                        //cout << '\n' ;
                        if( j < n-1)
                            sus = true; 
                    }
                    if(sus)
                        break ; 
                }
            }
            if( sus )
                break;
        }

        if( sus )
            cout << "YES" << '\n'; 
        else
            cout << "NO" << '\n' ;


        
    }

    return 0;
}