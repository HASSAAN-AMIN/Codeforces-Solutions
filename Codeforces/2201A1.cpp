/* 
                بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ   
    In the name of Allah, the Most Gracious, the Most Merciful.
*/
#include <iostream>
#include<vector>
#include<algorithm>
#include <stack>


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
            cin >> arr[i];
        }
        
        stack<int> st ;
        //st.push(arr[n-1]) ;
        for (int i = n-1; i >=  0 ; i--) {
            while(!st.empty() && st.top() == arr[i] +1 ){
                st.pop();
            }
            st.push(arr[i]) ;
        }

        cout << st.size() << '\n' ;
        
    }

    return 0;
}