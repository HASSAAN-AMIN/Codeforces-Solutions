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

    // int t;
    // cin >> t;
    // while(t--){
        int n;
        cin >> n;
        vector<int> arr(n );

        vector<int> less;
        vector<int> zero;
        vector<int> greater;
        
        bool sus = true ;
        for (int i = 0; i < n; i++) {

            cin >> arr[i] ;
            if(sus && arr[i]> 0)
                sus = false;


        }

        // to know 
        // real issue cant be empty
        // there must be a zero 
        // zero would always be non zero
        // greater could be zero if all negative
        // lesser cant be zero coz aint nobody gets negs by pos

        // strategy put all  zeroes in zero
        // put one neg in neg rest in zero 
        // put all  pos in pos
        
        // what if theres no pos
        // make a bool and if no pos
        // send two negs from  neg to  pos
        // as solution is guranteed then there must be >= 3 negs
        // actually they will ne in zeroes not negs coz there is only 1 neg in neg always  
        
        
        
        
        for (int i = 0; i < n; i++) {
            if(arr[i] > 0)
                greater.push_back(arr[i]);
            else if(arr[i] == 0)
                zero.push_back(0);
            else if(arr[i] < 0 && less.empty())
                less.push_back(arr[i]);
            else
                zero.push_back(arr[i]);
        }

        // the edge case 
        //
        //
        //
        if(sus){ // if the buddy is sus
            //then
            int x = 1, y = 1 ; 
            bool gotcha = false;
            for (int i = 0; i < zero.size(); i++) {
                
                if(arr[i] == 0)
                    continue;
                x = zero[i];
                zero.erase(zero.begin() +i) ;
                for (int j = i; j < zero.size(); j++) {
                    if(zero[j] == 0)
                        continue;
                    y = zero[j];
                    zero.erase(zero.begin() +j) ;
                    gotcha = true;
                    break;
                }
                if(gotcha)
                    break;
            }
            if(x >0 || y >0){
                cout << "This will never happen\n" ;
            }
            greater.push_back(x);
            greater.push_back(y);

        }


        cout << less.size() << ' ';
        for (int i = 0; i < less.size(); i++) {
            cout << less[i] << ' ' ;
        }
        cout << '\n' ;
        cout << greater.size() << ' ' ;
        for (int i = 0; i < greater.size(); i++) {
            cout << greater[i] << ' ' ;
        }
        cout << '\n' ;
        cout << zero.size() << ' ' ;
        for (int i = 0; i < zero.size(); i++) {
            cout << zero[i] << ' ' ;
        }
        cout << '\n' ;

        



    //}

    return 0;
}