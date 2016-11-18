/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Jimmy
 *
 * Created on November 18, 2016, 12:03 AM
 */


#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

#include "number.h"

int main(int argc, char** argv) {
    srand(static_cast<unsigned int>(time(0)));
    int n=rand()%10000;
    cout<<"Random number is "<<n<<endl;
    Numbers num(n);
    Numbers::print();
    return 0;
}

