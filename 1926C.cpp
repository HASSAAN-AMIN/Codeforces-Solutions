/* 
                بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ   
    In the name of Allah, the Most Gracious, the Most Merciful.
*/
#include <iostream>

using namespace std;

// Whats better than doing a dp problem at 3 AM? 

int sumof(int x){
    int y = 0;
    while(x){
        y += x%10;
        x /=10;
    }
    return y;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    int arr[200001];
    arr[0] = 0;
    for(int i = 1 ; i < 200002 ; i++){
        arr[i] = arr[i-1] +  sumof(i) ;
    }
    while(t--){
        int n;
        cin >> n;
        cout << arr[n] << '\n';
    }
    return 0;
}