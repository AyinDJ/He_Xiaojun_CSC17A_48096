/* 
 * File:   main.cpp
 * Author: Jimmy
 * Created on October 4, 2016, 11:07 PM
 * Purpose:Chapter 11 program 8
 */

#include <iostream>
#include <cstdlib>
#include <string>
#include <iomanip>
#include <fstream>
using namespace std;

#include "account.h"

int main(int argc, char** argv) {
    int total;
    cout<<"How many account would you want to have?";
    cin>>total;
    
    account AcArray[total];
    for(int i=0;i<total;i++){
        
        cout<<"Enter the full name:";
        cin>>AcArray[i].name;
        cout<<"Enter the address:";
        cin>>AcArray[i].address;
        cout<<"Enter the City:";
        cin>>AcArray[i].city;
        cout<<"Enter the State:";
        cin>>AcArray[i].state;
        cout<<"Enter the zip code:";
        cin>>AcArray[i].zip;
        cout<<"Enter the Telephone number:";
        cin>>AcArray[i].tele;
        cout<<"Enter the account balance:";
        cin>>AcArray[i].acc;
        cout<<"Enter the last day paid:";
        cin>>AcArray[i].date;
    }
    
    for(int j=0;j<total;j++){
        cout << "The customer's name is " << AcArray[j].name << endl;
        cout << AcArray[j].name <<"'s address is " << AcArray[j].address << endl;
        cout << AcArray[j].name <<" is currently living in the city " << AcArray[j].city << endl;
        cout << AcArray[j].name <<" is currently living in the state of " << AcArray[j].state << endl;
        cout << AcArray[j].name <<"'s zip code is " << AcArray[j].zip << endl;
        cout << AcArray[j].name <<"'s telephone number is " << AcArray[j].tele << endl;
        cout << AcArray[j].name <<"'s current account balance is " << AcArray[j].acc << endl;
        cout << "The last day "<< AcArray[j].name <<" paid was " << AcArray[j].date << endl;

    }
    return 0;
}