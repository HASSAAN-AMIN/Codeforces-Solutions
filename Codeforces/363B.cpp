/* 
                بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ   
    In the name of Allah, the Most Gracious, the Most Merciful.
*/
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;
    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (i != 0)
            arr[i] += arr[i - 1];
    }

    int mini = arr[k - 1]; 
    int idx = 0;           
    for (int i = k; i < n; i++) {
        int sum = arr[i] - arr[i - k];
        if (sum < mini) {
            mini = sum;
            idx = i - k + 1; 
        }
    }

    cout << idx + 1 << '\n'; 

    return 0;
}
