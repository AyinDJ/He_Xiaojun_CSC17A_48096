/* 
 * File:   info.cpp
 * Author: Jimmy
 * Created on November 17, 2016, 11:18 PM
 * Ch13 pg4
 */

#include <iostream>
using namespace std;
#include "info.h"


info::info(string n,string addr,string num,int a) {
    name=n;
    address=addr;
    number=num;
    age=a;
}


//set the name
void info::setName(string name) {
    this->name=name;
}

//set the address
void info::setAddr(string address) {
    this->address=address;
}

//set the number
void info::setNum(string number) {
    this->number=number;
}
//set the age
void info::setAge(int age) {
    this->age=age;
}

//print out the information
void info::pntInfo() const {
    cout<<"Name: "<<info::getName()<<"   "<<"Phone number: "
            <<info::getNum()<<endl;
    cout<<"Address: "<<info::getAddr()<<"   "<<"Age: "
            <<info::getAge()<<endl<<endl;
}

