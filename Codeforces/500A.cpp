#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, t;
    cin >> n >> t;
    
    vector<int> a(n); 
    for (int i = 1; i < n; i++) {
        cin >> a[i];
    }

    int i = 1;
    while (i < t) {
        i += a[i];
    }

    if (i == t) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}