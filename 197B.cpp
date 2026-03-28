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
        vector<vector<char>> arr(2, vector<char>(n));
        for (int i = 0; i < n; i++) {
            cin >> arr[0][i] ;
        }
        for (int i = 0; i < n; i++) {
            cin >> arr[1][i] ;    
        }
        int cap =  0;
        for (int i = 0; i +2 < n; i++) {
            if( arr[0][i] == '.' &&  arr[0][i+1] == '.' &&  arr[0][i+2] == '.' )
                if( arr[1][i] == 'x' &&  arr[1][i+1] == '.' &&  arr[1][i+2] == 'x' )
                    cap++;
            if( arr[0][i] == 'x' &&  arr[0][i+1] == '.' &&  arr[0][i+2] == 'x' )
                if( arr[1][i] == '.' &&  arr[1][i+1] == '.' &&  arr[1][i+2] == '.' )
                    cap++;
                    
        }
        cout << cap << '\n' ;
    }

    return 0;
}