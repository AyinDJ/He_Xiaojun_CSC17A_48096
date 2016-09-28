
/* 
 * File:   main.cpp
 * Author: Jimmy
 * Just the menu
 * Created on September 27, 2016, 6:25 PM
 */


//System Libraries
#include <iostream>
#include <cstdlib>
#include <string>
#include <iomanip>
#include <fstream>
using namespace std;


//Function
void pg1();
void pg2();
void pg3();
void pg4();
void pg5();
void pg6();
void pg7();
void pg8();


int main(int argc, char** argv) {
    //Declare variable
    int choise;
    //Display the menu
    do{
    cout<<"*******************Menu*******************"<<endl;
    cout<<"1."<<endl;//3.12
    cout<<"2."<<endl;//3.13
    cout<<"3."<<endl;//4.6
    cout<<"4."<<endl;//4.10
    cout<<"5."<<endl;//4.4
    cout<<"6."<<endl;//5.11
    cout<<"7."<<endl;//6.7
    cout<<"8."<<endl;//7.6
    cout<<"0.Exit the program"<<endl;
    
    //check the number 
    do{
        cout<<"Please select the program(0 to 10)"<<endl;
        cin>>choise;
        if(choise<0||choise>8)
            cout<<"Invalid input"<<endl;
    }while(choise<0||choise>8);
    
    //select program
    switch(choise) {
            case 1: pg1(); break;
            case 2: pg2(); break;
            case 3: pg3(); break;
            case 4: pg4(); break;
            case 5: pg5(); break;
            case 6: pg6(); break;
            case 7: pg7(); break;
            case 8: pg8(); break;;
            case 0: {
                cout<<"This program is end!!"<<endl;
                break;
                }
    }
    //if the number not 0, run again
    if(choise!=0){
        cout<<endl<<endl;
        cout<<"Press enter to continue";
        cin.ignore();
        cin.ignore();
        }
    }while(choise!=0);

    return 0;
}

