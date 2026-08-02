/* 
                بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ   
    In the name of Allah, the Most Gracious, the Most Merciful.
*/
#include <iostream>
#include<vector>
#include<algorithm>
#include <set>
#include <unordered_set>



using namespace std;

void dfs(int u , vector<unordered_set<int>> &arr , set<int> &vis  , int &cnt ){
    cnt++;
    auto it = vis.begin() ;

    while(it != vis.end()){
        bool sus  = false;

        if(arr[u].count(*it))
        // for( int v : arr[u]){
        //     if( v == *it){
                sus = true;
                break;
            //}
        //}
        if(sus){
            it++;
        }else{
            int v = *it;
            vis.erase(v);
            dfs(v, arr, vis, cnt);
            // thats so smart
            it = vis.upper_bound(v);
        }
    }
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n  , m ;
    cin >> n >> m ;


    vector<unordered_set<int>> arr(n);

    for (int i = 0; i < m; i++) {
        int x , y ;
        cin >> x >> y;
        x--;
        y--;
        arr[x].insert(y);
        arr[y].insert(x);
    }

    set<int> vis; 
    for (int i = 0; i < n; i++) {
        vis.insert(i);        
    }

    vector<int> ans; 
    

    for (int i = 0; i < n; i++) {
        if(vis.find(i) != vis.end()){
            vis.erase(i);
            int cnt = 0;
            dfs(i , arr , vis , cnt) ;
            ans.push_back(cnt) ;
        }
    }

    sort(ans.begin() , ans.end());

    cout << ans.size() << '\n';
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << ' ' ;
    }
    cout << '\n';




    return 0;
} 