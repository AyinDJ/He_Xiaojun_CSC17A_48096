/* 
 * File:   main.cpp
 * Author: Jimmy
 * Created on November 17, 2016, 11:17 PM
 * Ch13 pg4
 */

#include <iostream>
using namespace std;
#include "info.h"


int main(int argc, char** argv) {
    info me("Jimmy",        "123 10th st","9510000000",15);
    info uncle("Xiaojun He","456 11th st","9511111111",22);
    info cousin("AyinDJ",   "789 12th st","9512222222",23);
    me.pntInfo();
    me.setAge(30);
    cout<<"Change the age to 30..."<<endl;
    me.pntInfo();
    cousin.pntInfo();
    cout<<"Change the address..."<<endl;
    cousin.setAddr("567 13th St");
    cousin.pntInfo();
    uncle.pntInfo();
    cout<<"Change the number..."<<endl;
    uncle.setNum("9513333333");
    uncle.pntInfo();

    return 0;
}

