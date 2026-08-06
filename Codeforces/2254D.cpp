#include <bits/stdc++.h>
using namespace std;


#define ll long long
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        
        vector<ll> arr(n);
        map<ll, int> cnt;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            cnt[arr[i]]++;
        }

        bool sus = false;
        if(cnt.count(0))
            sus = true;

        vector< pair<ll, int> > grp(cnt.begin(), cnt.end());


        int k = grp.size();

        vector<ll> val(k);

        if (sus) {
            if (k == 1) {
                val[0] = 1;
            } else {
                for (int i = 0; i < k - 1 ; i++) {

                    ll d = grp[i + 1].first - grp[i].first;

                    if (d % grp[i].second != 0) {
                        sus = false;
                        break;
                    }
                    val[i] = d / grp[i].second;
                    
                    // if(i)
                    //  cout << "at i : " <<  i << '\n' ;
                    //  cout << val[i] << ' ' << val[i-1] << '\n';
                    if (i != 0 && val[i] <= val[i - 1]) {
                        sus = false;
                        break;
                    }
                }
                if (sus) 
                    val[k - 1] = val[k - 2] + 1;
            }
        }

        if (!sus) {
            cout << -1 << '\n';
            
        }else{
            map<ll, ll> mapy;
            for (int i = 0; i < k; i++) 
                mapy[grp[i].first] = val[i];

            for (int i = 0; i < n; i++) {
                cout << mapy[arr[i]] << ' ';
            }

            cout << '\n';
        }


    }
    return 0;
}