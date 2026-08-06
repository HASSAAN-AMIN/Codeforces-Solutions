/* 
                بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ   
    In the name of Allah, the Most Gracious, the Most Merciful.
*/
#include <iostream>
#include<vector>

using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n ;
    cin >> n; 
    vector<int>arr(n);

    int cnt_a = 0 , cnt_b = 0 ;
    for (int i = 0; i < n; i++) {
        cin >> arr[i] ;
    }
    
    bool sus = false;
    for(int i = 0 ; i < n ; i++){
        if(arr[i] == 25 ){
            cnt_a++;
        }
        else if(arr[i] == 50){
            if(cnt_a > 0){
                cnt_a--;
                cnt_b++;
            }else{
                sus = true;
                break;
            }
        }
        else if(arr[i] == 100){
            if(cnt_a > 0){
                if(cnt_b>0){
                    cnt_b--;
                    cnt_a--;
                }else if(cnt_a >= 3){
                    cnt_a -= 3;
                }else{
                    sus = true;
                    break;
                }
            }else{
                sus = true;
                break;
            }
        }
    }


        if(sus)
            cout << "NO" << '\n';
        else
            cout << "YES" << '\n' ;



    return 0;
}