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
        
        string s;
        cin >> s;

        int minwf = 1;

        int arr[2] = {0 ,0 };

        for (char c : s) {
            arr[c - '0']++;            
        }

        if (arr[0] > 0 && arr[1] > 0) {

            int cnt = 0;
            for (int i = 0; i < n-1; i++){
                if (s[i] != s[i + 1]) 
                    cnt++;
                if( cnt >  1)
                    break;    
            }
            if( cnt == 1)
                cout << 2 << '\n';
            else
                cout << 1 << '\n' ;
        }else{  
            cout << 1 << '\n';
        }

    }

    return 0;
}