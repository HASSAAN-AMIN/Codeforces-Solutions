/* 
                بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ   
    In the name of Allah, the Most Gracious, the Most Merciful.
*/
#include <iostream>

using namespace std;

int main() {
    
    //  test code 
    // write a code make a 2d array 
    // where row number or rows tell the student #
    // where as the column tell the subject #
    // suppose there are 3  students and 5 subjects
    // input the marks from user and then in the end 
    // show the 2d array


    // Solution

    // so listen

    // we have 3 parts
    // we divide question in 3 parts
    // part 1  we make an 2 d array
    // part 2 we input that 2d array
    // and part 3 display the 2d array


    // lets start that
    // Part 1

    // clerly students ->rows
    // and students are 3
    int rows  = 3 ;

    // similarly subjects ->cols
    // and subjects are 5
    int cols = 5 ;

    //  so lets make that 2d array
    int arr[rows][cols] ;
    // yeaah we can do like { {} , {}  ,  {}} this type shi
    // but we have to input that from user thats why
    // we dk the values
    // this just tells the computer 
    // that store a  space of 
    //  3*5 = 15 integers
    // store the value of 15 integers


    // STEP 2

    // just input the array
    // how do we used to do in 1d array? 
    // yeah it was simple
    // but here 
    // for every student 
    //     we would need an extra loop that iterates over his subjects
    
    // for (int i = 0; i < rows; i++) {
    //     for (int j = 0; j < cols; j++) {
            
    //     }
    // }

    // yeah smth like that
    

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "Enter the marks for :\n";
            cout << "Student # " << i << '\n' ;
            cout << "For subject # " << j << '\n';
            cin >> arr[i][j];
        }
        cout << '\n' ;
    }

    // or in a less fancy way maybe like htis below

    // for (int i = 0; i < rows; i++) {
    //     for (int j = 0; j < cols; j++) {
    //         cin >> arr[i][j];
    //     }
    // }




    // Step 3 

    // this  one is actually simple
    // we just need to show elemetns
    // i am going to do that in 2 ways

    cout << '\n' << '\n' ;
    // simple way 
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << arr[i][j] << ' ' ;
        }
        cout << '\n' ;
    }
    


    // a Fancy way

    cout << "\n\n Fancy way \n\n" ;
    for (int i = 0; i < rows; i++) {
        cout << "Student # " << i << '\n' ;
        for (int j = 0; j < cols; j++) {
            cout << " Subject # " << j ;
            cout << " Marks " <<  arr[i][j] <<  '\n' ;
        }
        cout << '\n' << '\n' ;
    }


    return 0;
} 