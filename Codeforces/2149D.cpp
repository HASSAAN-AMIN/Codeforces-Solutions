/* 
                بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ   
    In the name of Allah, the Most Gracious, the Most Merciful.
*/
#include <iostream>
#include<vector>
#include<algorithm>


using namespace std;

long long sus(vector<int>&arr){
    long long ans  = 0;
    int mid = arr.size()/2 ;
    
    for (int i = 0; i < arr.size(); i++) {
        ans +=  abs(arr[mid] - arr[i]) - abs(mid - i);
    }
    return ans;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n ;
        cin >> n;
        vector<int> arr, brr;
        char c;
        for(int i = 0 ;  i < n ; i++){
            cin >> c;
            if(c == 'a')
                arr.push_back(i);
            else
                brr.push_back(i); 
        }

        cout << min( sus(arr) , sus(brr))<< '\n';

    }

    return 0;
}