/* 
                بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ   
    In the name of Allah, the Most Gracious, the Most Merciful.
*/
#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector<int> ask(vector<int>arr){
    cout << "next" << ' ';
    for(const int &i : arr)
        cout << i << ' ' ;
    cout << '\n' ;

    int k ;
    cin >> k ;

    vector<int> sup(10);

    string s;
    for (int i = 0; i < k; i++) {
        cin >> s;

        for (char c : s)
            sup[c - '0'] = i;
    }

    return sup;
}

int main() {
    // ios::sync_with_stdio(false);
    // cin.tie(nullptr);
    // interactive

    // t + c   <=  1000
    // q = 3 * (t + c)


    // hope this works 

    ask({0  , 1 }) ;
    vector<int> ans =  ask({ 1 }) ;

    while( ans[0] != ans[1] ){
        ask({ 0  , 1 }) ;
        ans =  ask({ 1 }) ;
    }


    while (ans[2] != ans[0]) {
        ans = ask({ 0 , 1 , 2, 3, 4, 5, 6, 7 ,8 ,9 });
    }

    cout << "done" << endl;



    return 0;
}