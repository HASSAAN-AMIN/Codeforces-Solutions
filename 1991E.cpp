/* 
                بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ   
    In the name of Allah, the Most Gracious, the Most Merciful.
*/
#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;
void dfs(int u , vector<vector<int>> &arr, vector<bool> &vis ,vector<bool> &col , bool val , bool &ez){
    if(!ez)
        return;
    if( vis[u]){
        if(col[u] != val)
            ez =false;
        return;
    }

    vis[u] = true;
    col[u] = val;
    for( int v : arr[u]){
        dfs( v, arr , vis , col , !val , ez) ;
    }
}


int main() {
    // ios::sync_with_stdio(false);
    // cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n , m ;
        cin >> n >> m;

        vector<vector<int>> arr(n) ;

        for (int i = 0; i < m; i++) {
            int x , y;
            cin >> x >> y ;
            x--;
            y--;
            arr[x].push_back(y);
            arr[y].push_back(x);    
        }

        // lol ez just check bipatrite

        vector<bool>vis( n , false); 
        vector<bool>col( n) ;



        bool sus = false;
        for (int i = 0; i < n; i++) {
            if(!vis[i]){
                bool ez = true;
                dfs(i , arr , vis , col , true , ez);
                if(!ez){
                    sus = true;
                    break;
                }
            }
        }


        vector<int> red,blue;
        for (int i = 0; i < n; i++) {
            if(col[i])  
                red.push_back(i);
            else
                blue.push_back(i);
        }


        if(sus){// -> graph is not bipatrite cant col
            cout << "Alice" << '\n';
            for (int i = 0; i < n; i++) {
                cout << 1 << ' ' << 2 << '\n';
                int x ,y ;
                cin >>  x ;
                if(x == -1){
                    cout << "yo you suck smth is wrong!" << '\n' ;
                    return 0;
                }
                cin >> y ;
                // we dc nga about your tries its just impossible
            }
        }else{// ez just color it nga
            cout << "Bob" << '\n';
            for (int i = 0; i < n; i++) {
                int x , y ;
                cin >> x; 
                if( x == -1){
                    cout << "smth wrong buddy\n" ;
                    return 0 ; // doing this because i am a good boy and wont let my useless not working code keep running after the judge told me that i suck so i should just damn stop because its 5 am and i havent slept and ikd what i am writing
                }
                cin >> y;

                if (x > y) // ty tourist for this 
                    swap(x, y);

                int z = 6 - x - y; // this also

                if (red.empty()) {
                    int v = blue.back();
                    blue.pop_back();
                    cout << v + 1 << ' ' << (z == 2 ? 3 : 2) << '\n';
                }
                else if (blue.empty()) {
                    int v = red.back();
                    red.pop_back();
                    cout << v + 1 << ' ' << (z == 1 ? 3 : 1) << '\n';
                }
                else if (z == 1) { 
                    int v = blue.back();
                    blue.pop_back();
                    cout << v + 1 << ' ' << 2 << '\n';
                }
                else {
                    int v = red.back();
                    red.pop_back();
                    cout << v + 1 << ' ' << 1 << '\n';
                }



            }
        }


        
    }

    return 0;
}