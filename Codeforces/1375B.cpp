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
        int n , m;
        cin >> n >> m;

        vector<vector<int>> arr(n , vector<int>(m));
        bool sus = false ;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> arr[i][j] ;

                if( (i == 0 || i== n-1 )  &&(j ==0 || j == m-1) && arr[i][j] >2 )
                    sus = true;
                else if( ((i==0)|| (i==n-1)|| (j==0) || (j==m-1) )&& arr[i][j] >3 )
                    sus = true;
                else if(arr[i][j] > 4)
                    sus = true;
            }
        }
        if(sus)
            cout << "NO\n" ;
        else{
            cout << "YES\n" ;
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < m; j++) {
                    if( (i == 0 || i== n-1 )  &&(j ==0 || j == m-1)  )
                        cout << 2 << ' ' ;
                    else if( (i==0)|| (i==n-1)|| (j==0) || (j==m-1) )
                        cout << 3 << ' ' ;
                    else
                        cout << 4 << ' ' ;
                }
                cout << '\n' ;
            }

        }
        
    }

    return 0;
}