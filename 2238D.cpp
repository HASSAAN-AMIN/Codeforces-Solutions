/* 
                بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ   
    In the name of Allah, the Most Gracious, the Most Merciful.
*/
#include <iostream>
#include<vector>
#include<algorithm>



using namespace std;



int s_p[1000001];

void pre_c() {
    for (int i = 2; i <= 1000000; i++) {
        if (s_p[i] == 0) {
            s_p[i] = i;
            if ((long long)i * i <= 1000000) 
                for (int j = i * i; j <= 1000000; j += i) 
                    if (s_p[j] == 0) 
                        s_p[j] = i;
                
            
        }
    }
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    pre_c();

    int t;
    cin >> t;
    while(t--){
        
        int n;
        cin >> n;

        int total = 0;      
        int uniq = 0;  

        int x = n;
        while (x > 1) {
            int p = s_p[x];
            uniq++;
            while (x % p == 0) {
                x /= p;
                total++;
            }
        }
        total += uniq;
        total--;

        cout << total  << '\n';
    }

    return 0;
}