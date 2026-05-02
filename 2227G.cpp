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
        vector<int> arr (n) ;
        vector<int> brr (n ,  0 ) ;
        for (int i = 0; i < n; i++) {
            cin >> arr[i] ;
            if( i != 0 )
                brr[i] = brr[i-1] + ((i%2==0)?1:-1)*(arr[i]) ; 
            else                                                
                brr[0] = arr[0] ;
        }
        int ans = n;
        for (int i = 0; i < n -1 ; i++) 
            for (int j = i+2 ; j < n; j++) 
                if( (j-i+1)%2 == 1)
                    if(i%2)
                        if(brr[j] <  brr[i-1])
                            ans++;
                        else{}
                    else
                        if(brr[j] >  ( (i==0)?0:brr[i-1] ) )
                            ans++;  

        cout << ans << '\n' ;
        
            
    

        
    }

    return 0;
} 