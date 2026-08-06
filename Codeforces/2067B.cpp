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
            cin >> arr[i] ;
        }   

        bool sus = false;

        sort(arr.begin() , arr.end() );
        int hmm = 0 ;
        for (int i = 0; i < n; i += 2 ) {
            if( max(hmm , arr[i])  != max( hmm , arr[i+1]) ){
                sus = true;
                break;
            }
            hmm = max(hmm , arr[i]) +1 ;
        }


        if(sus) 
            cout << "NO\n";
        else
            cout << "YES\n" ;


        
    }

    return 0;
}



/*


9

2
1 1

2
2 1

4
1 1 4 4

4
3 4 3 3

4
2 3 4 4

6
3 3 4 5 3 3
6
2 2 2 4 4 4
8
1 1 1 1 1 1 1 4
10
9 9 9 10 10 10 10 10 10 10

Yes
No

Yes
Yes
No
Yes
No
Yes
Yes
*/