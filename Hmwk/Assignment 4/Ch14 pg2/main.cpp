/* 
 * File:   main.cpp
 * Author: Jimmy
 * Created on November 18, 2016, 1:10 AM
 * Ch14 pg2
 */

#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>
using namespace std;
#include "data.h"

int main(int argc, char** argv) {
    srand(static_cast<unsigned int>(time(0)));
    int n=rand()%365+1;
    cout<<"Randomly choose a day"<<endl;
    cout<<"It is day #"<<n<<endl;
    
    DayOfYear dd(n);
    DayOfYear::print();
    return 0;
}

