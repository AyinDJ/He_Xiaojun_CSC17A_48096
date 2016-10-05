/* 
 * File:   main.cpp
 * Author: Jimmy
 * Created on October 4, 2016, 10:17 PM
 * Purpose:Chapter 11 program 7
 */

#include <iostream>
#include <cstdlib>
#include <string>
#include <iomanip>
#include <fstream>
using namespace std;

#include "account.h"

int main(int argc, char** argv) {

    account AcArray;

    cout<<"Enter the full name:";
    cin>>AcArray.name;
    cout<<"Enter the address:";
    cin>>AcArray.address;
    cout<<"Enter the City:";
    cin>>AcArray.city;
    cout<<"Enter the State:";
    cin>>AcArray.state;
    cout<<"Enter the zip code:";
    cin>>AcArray.zip;
    cout<<"Enter the Telephone number:";
    cin>>AcArray.tele;
    cout<<"Enter the account balance:";
    cin>>AcArray.acc;
    cout<<"Enter the last day paid:";
    cin>>AcArray.date;
    

    cout << "The customer's name is " << AcArray.name << endl;
    cout << AcArray.name <<"'s address is " << AcArray.address << endl;
    cout << AcArray.name <<" is currently living in the city " << AcArray.city << endl;
    cout << AcArray.name <<" is currently living in the state of " << AcArray.state << endl;
    cout << AcArray.name <<"'s zip code is " << AcArray.zip << endl;
    cout << AcArray.name <<"'s telephone number is " << AcArray.tele << endl;
    cout << AcArray.name <<"'s current account balance is " << AcArray.acc << endl;
    cout << "The last day "<< AcArray.name <<" paid was " << AcArray.date << endl;

    return 0;
}


