/* 
                بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ   
    In the name of Allah, the Most Gracious, the Most Merciful.
*/
#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string n ;
    cin >> n ;

    // he says 4  7 he could say  6 7 but he didnt
    // any ways  
    // the order is kinda 
    // 4 7 44 47 74  77 444  447 474  477  744 747 774 777
    // 0 1 00 01 10  11 000  001 010  011  100 101 110 111 
    // it looks like easy task as it can be binary
    // but but but 
    // if you notice it what he tryna do is that
    // he sneaking the binaries 0  00 000 0000 but they arent in actual binary nums
    // which can cause mis allignment if we translate the binary
    // so so so 
    // ummmm
    // you noticed smth?
    // that the 0 00 000 are always the first digit of the num right
    // and their kids also like 00 01 and for 000 001 010 011 
    // 1 + 2+ 4+ 8 +16
    // then what if we calculate the normal binary value
    // and then add the number of zeroes ez pz ig so 
    
    long long ans = 0;

    for (int i = 1; i <  n.size(); i++) {
        ans += (1LL << i);
    }
    long long val = 0;
    for (char c : n) {
        val <<= 1;
        if (c == '7') 
            val |= 1;
    }
    cout << ans + val + 1<< '\n';

    return 0;
}