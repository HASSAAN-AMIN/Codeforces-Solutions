/* 
                بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ   
    In the name of Allah, the Most Gracious, the Most Merciful.
*/
#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;

pair<int,int> dfs( int u , int p , int d , vector<vector<int>> &arr ){
    pair<int,int> ans = {u , d};

    for( int v : arr[u] ){
        if( v == p )
            continue;

        pair<int,int> cur = dfs( v , u , d+1 , arr );

        if( cur.second > ans.second )
            ans = cur;
    }

    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<vector<int>> arr(n);

    for (int i = 0; i < n-1; i++) {
        int x , y;
        cin >> x >> y;
        x--;
        y--;

        arr[x].push_back(y);
        arr[y].push_back(x);
    }

    int m;
    cin >> m;

    vector<vector<int>> brr(m);

    for (int i = 0; i < m-1; i++) {
        int x , y;
        cin >> x >> y;
        x--;
        y--;

        brr[x].push_back(y);
        brr[y].push_back(x);
    }

    int s1 = dfs(0 , -1 , 0 , arr).first;
    int s2 = dfs(0 , -1 , 0 , brr).first;

    int d1 = dfs(s1 , -1 , 0 , arr).second;
    int d2 = dfs(s2 , -1 , 0 , brr).second;

    int two = (d1 + 1) / 2 + (d2 + 1) / 2 + 1;

    cout << max({d1 , d2 , two}) << '\n';

    return 0;
}