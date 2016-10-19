/* 
 * File:   main.cpp
 * Author: Jimmy
 * Created on October 18, 2016, 4:23 PM
 * Purpose:Chapter 12 program 11
 */

#include <iostream>
#include <cstdlib>
#include <string>
#include <cstring>
#include <vector>
#include <iomanip>
#include <fstream>
#include <ctime>
#include <ctype.h>
using namespace std;


struct company {
    string name;
    int quarter[4];
    int qrtSale[4];
};


int main(int argc, char** argv) {
    fstream sale;
    company com;
    sale.open("sale.txt",ios::out|ios::binary);
    
    for(int i=0;i<4;i++){
        cout<<"Enter Division name: "<<endl;
        cin >>com.name;
        for(int j=0;j<4;j++){
            do{
                cout<<"Enter Quarter Number"<<endl;
                cin >>com.quarter[i];
                cout<<"Enter Quarter sales "<<endl;
                cin >>com.qrtSale[i];
            }while(com.qrtSale[i]<0);
        }   
    }
    
    sale.close();

    return 0;
}

