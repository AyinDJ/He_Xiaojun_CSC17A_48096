/* 
 * File:   main.cpp
 * Author: Jimmy
 * Created on October 17, 2016, 5:46 PM
 * Purpose:Chapter 12 program 8
 */

#include <iostream>
#include <cstdlib>
#include <string>
#include <cstring>
#include <vector>
#include <iomanip>
#include <fstream>
#include <ctime>
using namespace std;

void arrayToFile(string*,int*,int);
void fileToArray(string*,int*,int);


int main(int argc, char** argv) {
    const int SIZE = 10;
    int array[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int number;
    string name= "input.dat";
    
    arrayToFile(name,array,SIZE);
    fileToArray(name,number,SIZE);

    return 0;
}

void arrayToFile(string* name,int *a,int n) {
    fstream file;
    file.open(name,ios::out|ios::binary);
    file.write(reinterpret_cast<char *>(a),sizeof(int)*n);
    file.close();
}

void fileToArray(string* name,int *a,int n) {
    fstream file;
    file.open(name,ios::in|ios::binary);
    file.read(reinterpret_cast<char *>(a),sizeof(int)*n);
    file.close();
}
