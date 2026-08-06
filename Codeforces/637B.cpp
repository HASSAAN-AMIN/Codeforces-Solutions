/* 
                بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ   
    In the name of Allah, the Most Gracious, the Most Merciful.
*/
#include <iostream>
#include<vector>
#include<algorithm>
#include <climits>
#include <unordered_map>

using namespace std;

bool cmp(pair<string,int> &a, pair<string,int> &b){
    return a.second > b.second;   
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n ;
    cin >> n;
    //vector<pair<string , int>> arr(n, { "" , INT_MIN})  ;
    unordered_map<string , int> arr; 
    int idx = 1 ;
    for (int i = 0; i < n; i++) {
        string s ;
        cin >> s ;
        arr[s] = idx ;
        idx ++ ;
    }
    vector<pair<string , int>> v(arr.begin() , arr.end() );
    
    sort(v.begin(), v.end(), cmp);
    cout << '\n' ;
    for (int i = 0; i < v.size(); i++) {
        cout << v[i].first << '\n' ;
    }


    return 0;
}