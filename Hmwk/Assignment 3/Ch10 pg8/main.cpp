/* 
 * File:   main.cpp
 * Author: Jimmy
 * Created on October 17, 2016, 12:13 AM
 * Purpose:Chapter 10 program 8
 */

#include <iostream>
#include <cstdlib>
#include <string>
#include <cstring>
#include <iomanip>
#include <fstream>
using namespace std;

int main(int argc, char** argv) {
    bool valid;         //boolean the input valid
    int sum=0;          //sum of all digit
    string str;         //string the digit
    
    //check the number
    do{
        valid=true;
        //ask the user to input the number
        cout<<"Please enter the number with separation: ";
        cin>>str;
        for(int i=0;i<str.length();i++){
            if(str.at(i)<48||str.at(i)>57)
                valid=false;
        }
        if(!valid)
            cout<<"Error input."<<endl;
    }while(!valid);
    
    //sum the digit
    for(int i=0;i<str.length();i++){
        sum+=static_cast<int>(str.at(i)-48);
    }
    
    //sorted the number
    for(int i=0;i<str.length()-1;i++){
        for(int j=i+1;j<str.length();j++){
            if(str.at(i)<str.at(j)){
                char temp=str.at(i);
                str.at(i)=str.at(j);
                str.at(j)=temp;
            }
        }
    }
    
    //Output
    cout<<"The sum of all number is: "<<sum<<endl;
    cout<<"The sorted number(From high to low) is: "<<str<<endl;

    return 0;
}

