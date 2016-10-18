/* 
 * File:   main.cpp
 * Author: Jimmy
 * Created on October 17, 2016, 3:49 PM
 * Purpose:Chapter 10 program 1
 */

#include <iostream>
#include <cstdlib>
#include <string>
#include <cstring>
#include <iomanip>
#include <fstream>
using namespace std;

int stringCount(char * str);

int main(int argc, char** argv) {
    int size=25;
    char string[size];
    char *pointer;
    pointer = &string[0];
    
    
    //ask the user to input the string
    cout<<"Enter string: "<<endl;
    cin.getline(string, size);  
    
    cout<<"The number of characters in the string "<<string<<" is "
            <<stringCount(pointer)<<" ."<<endl;
    return 0;
}

//get the length for string
int stringCount(char *str){
	return strlen(str);
}

