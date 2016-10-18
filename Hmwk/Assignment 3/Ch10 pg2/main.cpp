/* 
 * File:   main.cpp
 * Author: Jimmy
 * Created on October 17, 2016, 4:33 PM
 * Purpose:Chapter 10 program 2
 */

#include <iostream>
#include <cstdlib>
#include <string>
#include <cstring>
#include <iomanip>
#include <fstream>
using namespace std;

void Backward(char*);

int main(int argc, char** argv) {
    int size=25;
    char word[size];
    
    //ask the user input
    cout<<"Please enter a word not over than 25 letter:"<<endl;
    cin>>word;
    
    cout<<"The enter word displayed in reverse is: ";
    Backward(word);
    
    return 0;
}

void Backward(char *backWord){
    char *pointer = backWord;
    while(*pointer!='\0')
        ++pointer;
    while(pointer!=backWord)
        cout.put(*--pointer);
}

