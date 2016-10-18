/* 
 * File:   main.cpp
 * Author: Jimmy
 * Created on October 17, 2016, 4:55 PM
 * Purpose:Chapter 12 program 7
 */

#include <iostream>
#include <cstdlib>
#include <string>
#include <cstring>
#include <vector>
#include <iomanip>
#include <fstream>
using namespace std;

int main(int argc, char** argv) {
    ifstream input;
    ofstream output;
    char ch;
    int count=0;
    
    input.open("input.txt",ios::in);
    output.open("output.txt",ios::out);
    
    while(input){
        if(count==0)
            output.put(toupper(ch));
        else
            output.put(tolower(ch));
        count++;
        if(ch=='.')count=0;
        input.get(ch);              
    }
    
    input.close();
    output.close();
    return 0;
}

