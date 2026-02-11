/* 
                بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ   
    In the name of Allah, the Most Gracious, the Most Merciful.
*/
#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    std::ifstream inputFile("input.txt");
    std::ofstream outputFile("output.txt");


    int n;
    inputFile >> n;

    vector<int> arr(2 * n);
    vector<vector<int>> pos(5001);

    for (int i = 0; i < 2 * n; i++) {
        inputFile >> arr[i];
        pos[arr[i]].push_back(i + 1); 
    }
    bool sus = false;
    for (int x = 1; x <= 5000; x++) {
        if (pos[x].size()&1) {
            sus = true; 
            break;
        }
    }
    if(sus){
        outputFile << -1 << '\n' ;
    }else{
        for (int x = 1; x < 5001; x++) 
            for (int j = 0; j < pos[x].size(); j += 2) 
                outputFile << pos[x][j] << ' ' << pos[x][j + 1] <<  '\n' ;
        
    
    }


    return 0;
}
