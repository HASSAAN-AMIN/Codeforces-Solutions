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
        int n ;
        cin >> n; 

        string a , b;
        cin >> a >> b; 

        int o1 = 0 ;
        int e1 = 0 ;
        int o2 = 0 ;
        int e2 = 0 ;
        for (int i = 0; i < n ; i++) {
            if( i % 2== 0)  {
                if(a[i] == '1')
                    o1++;
                if(b[i] == '1')
                    o2++;
            }else{
                if(a[i] == '1')
                    e1++;
                if(b[i] == '1')
                    e2++;
            }
        }
        if( o1 == o2 && e1 == e2)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n' ;
    }

    return 0;
}