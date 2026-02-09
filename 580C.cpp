/*
                بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
    In the name of Allah, the Most Gracious, the Most Merciful.
*/
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int ans = 0;
void dfs(int v, int parent, int car, vector<int> &cat, vector<vector<int>> &adj, int m){
    if (car > m)
        return;
    if (v != 0 && adj[v].size() == 1){
        ans++;
        return;
    }
    for (int jk : adj[v]){

        if (jk == parent)
            continue;

        int send_car = car;

        if (cat[jk] == 1)
            send_car++;
        else
            send_car = 0;

        dfs(jk, v, send_car, cat, adj, m);
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    vector<int> cat(n);
    for (int i = 0; i < n; i++)
    {
        cin >> cat[i];
    }

    int x, y;
    vector<vector<int>> adj(n);
    for (int i = 0; i < n - 1; i++){
        cin >> x >> y;
        x--;
        y--;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    dfs(0 , -1 , cat[0] , cat , adj , m );
    cout << ans << '\n';
    return 0;
}