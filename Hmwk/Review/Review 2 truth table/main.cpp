/* 
 * File:   main.cpp
 * Author: Jimmy (Xiaojun He)
 * Created on September 19, 2016, 4:28 PM
 * Purpose: Review 2 truth table
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <string>
#include <iomanip>
#include <fstream>
using namespace std;

//Function
char checkvalue(bool);


int main(int argc, char** argv) {
    //declare variable
    const unsigned char SIZE = 13;
    bool x = true;
    bool y = true;
    //mark the name in array
    string boolean[13] = {"X","Y","!X","!Y","X&&Y","X||Y","X^Y","X^Y^Y",
                          "X^Y^X","!(X||Y)","!X&&!Y","!(X&&Y)","!X||!Y"};
    
    //display the boolean name
    for(int i = 0; i<SIZE;++i){
        cout << setw(8) << boolean[i];
    }
    cout<<endl;
    
    //output the truth table by for loop
    for(int i = 0;i<4;++i){
        if(i == 1){
            y = false;
        }else if(i == 2){
            x = false;
            y = true;
        }else if(i == 3){
            y = false;
        }
        cout << setw(8) <<checkvalue(x);
        cout << setw(8) <<checkvalue(y);
        cout << setw(8) <<checkvalue(!x);
        cout << setw(8) <<checkvalue(!y);
        cout << setw(8) <<checkvalue(x && y);
        cout << setw(8) <<checkvalue(x || y);
        cout << setw(8) <<checkvalue(x ^ y);
        cout << setw(8) <<checkvalue(x ^ y ^ y);
        cout << setw(8) <<checkvalue(x ^ y ^ x);
        cout << setw(8) <<checkvalue(!(x || y));
        cout << setw(8) <<checkvalue(!x && !y);
        cout << setw(8) <<checkvalue(!(x && y));
        cout << setw(8) <<checkvalue(!x || !y);
        cout << endl;
    }
    return 0;
}

//converts a boolean, T for true, F for false
char checkvalue(bool value){
    return value ? 'T' : 'F';
}

