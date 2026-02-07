/* 
                بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ   
    In the name of Allah, the Most Gracious, the Most Merciful.
*/
#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s ;
    int n = s.length() ;
    int ans = 0 ;
    for(int i = 0 ; i< n;i++)
		for(int j=i+1 ; j< n;j++)
			for(int k=j+1 ; k< n;k++)
				if(s[i]=='Q'&&s[j]=='A'&&s[k]=='Q')
					ans++;

    cout << ans << '\n' ;



    return 0;
}