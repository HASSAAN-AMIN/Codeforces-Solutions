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

    int n;
	cin >> n;
	vector<long long> arr(n + 1);  
    for (int i = 1; i <= n; i++) {
		long long x;
		cin >> x;
		arr[i] = arr[i - 1] + x;  
    }

	long long pi = arr[1];
	long long shu = arr[0];

	for (int i = 1; i <= n; i++) {
		pi = max(pi, arr[i] - shu);
		shu = min(shu, arr[i]);
	}
	cout << pi << '\n';




    return 0;
} 