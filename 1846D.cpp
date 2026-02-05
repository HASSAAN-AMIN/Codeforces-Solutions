/* 
                بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ   
    In the name of Allah, the Most Gracious, the Most Merciful.
*/
#include <iostream>
#include<vector>
#include <iomanip>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n , d ,h ;
        cin >> n >> d >> h;
        vector<long long> arr(n) ;
        for (int j = 0; j < n; j++) {
            cin >> arr[j]  ;
        }
        long double sum = (1ll*d*h)/2.0  ;
        for (int i = 0; i +1  < n; i++) {
            if(arr[i+1] >= arr[i] + h)
                sum += (1ll*d*h)/2.0 ;
            else 
                sum += (((2.0*d*h) - (d*(arr[i+1]-arr[i])))*(arr[i+1]-arr[i]))/(2.0*h);
        }

        cout << setprecision(10) << sum << '\n' ;

    }

    return 0;
}