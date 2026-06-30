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
        vector<int> brr(n);
        for (int i = 0; i < n; i++) {
            cin >> brr[i];
        }

        // can always increase   l = i true
        // can only decrease front one by inc myself

        bool sus = true; 
        //bool yeah = false;
        long long ahm = 0 ;
        for (int i = 0; i < n; i++) {
            if( arr[i] == brr[i]){
                continue;
            }
            else if( arr[i] < brr[i]){
                ahm += brr[i]- arr[i]; 
            }
            else{
                ahm -= arr[i] - brr[i] ;
                //if ( i!= 0 && ( yeah  && ( (arr[i]-brr[i]) <= brr[i-1] - arr[i-1]  ) )   )
                // if ( i!= 0 &&  ( (arr[i]-brr[i]) <= ahm  )    )
                //     yeah  = false;
                // else{
                //     sus = false;
                //     break;
                // }
            }
            if( ahm  < 0 ){
                sus = false;
                break;
            }
        }
        if(sus)
            cout << "YES\n";
        else
            cout << "NO\n" ;


    }

    return 0;
}