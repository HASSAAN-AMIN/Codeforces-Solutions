/* 
                بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ   
    In the name of Allah, the Most Gracious, the Most Merciful.
*/
#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;


bool isPrime(int n) {
    
    if (n <= 1) 
        return false;
    if (n == 2) 
        return true;
    if (n % 2 == 0) 
        return false;
    
    
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) 
            return false;
    }
    
    return true;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        bool sus = false;
        
        if( isPrime(n +1 ))
            sus = true ;


        if(sus)
            cout<< "YES" << '\n';
        else
            cout << "NO" << '\n';
        
    }

    return 0;
}