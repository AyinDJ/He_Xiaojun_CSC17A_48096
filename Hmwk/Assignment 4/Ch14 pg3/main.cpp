/* 
 * File:   main.cpp
 * Author: Jimmy
 * Created on November 18, 2016, 2:14 AM
 * Ch14 pg3
 */

#include <iostream>
#include <string>
using namespace std;
#include "day.h"

int main(int argc, char** argv) {
    cout<<"Initial a day to Dec 31st"<<endl;
    DayOfYr dd("December",31);
    DayOfYr::print();
    cout<<endl<<"After using postfix ++"<<endl;
    dd++;
    DayOfYr::print();
    cout<<endl<<"After using prefix ++"<<endl;
    ++dd;
    DayOfYr::print();
    cout<<endl<<"After using postfix --"<<endl;
    dd--;
    DayOfYr::print();
    cout<<endl<<"After using prefix --"<<endl;
    --dd;
    DayOfYr::print();
    return 0;
}

