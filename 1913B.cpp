/* 
                بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ   
    In the name of Allah, the Most Gracious, the Most Merciful.
*/
#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int arr[2] = { 0,0} ;
        for (int i = 0; i < s.size(); i++) {
            if(s[i] == '0')
                arr[0]++;
            else
                arr[1]++;
        }


        for (int i = 0; i < s.size() +1; i++) {
            if((arr[ 1 - (s[i] -'0')] == 0 ) || (i ==s.size() )){
                cout << s.size() - i << '\n' ;
                break;
            }
            arr[1 - (s[i] -'0')]-= 1;
        }

    
    }

    return 0;
}