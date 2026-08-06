/* 
                بِسْمِ اللهِ الرَّحْمٰنِ . الرَّحِيْمِ   
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
        vector<vector<int>> arr( n-1 , vector<int>(2));
        for (int i = 0; i < n-1; i++) {
            cin >> arr[i][0] ;
            cin >> arr[i][1];
        }
        vector<int> checky(n +1 , 0 ) ;
        int cnt = 0 ;
        for (int i = 0; i < n-1 ; i++) {
            checky[arr[i][0]]++;
            checky[arr[i][1]]++;
        }

        for(int i = 1 ; i < n+1  ; i++){
            if(checky[i] == 1)
                cnt++;
        }
        cout << (cnt+ 1)/2<< '\n';
        
    }

    return 0;
}