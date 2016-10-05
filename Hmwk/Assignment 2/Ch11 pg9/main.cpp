/* 
 * File:   main.cpp
 * Author: Jimmy
 * Created on October 4, 2016, 11:16 PM
 * Purpose:Chapter 11 program 9
 */

#include <iostream>
#include <cstdlib>
#include <string>
#include <iomanip>
#include <fstream>
using namespace std;

#include "speaker.h";

Speaker *initArr(int);
void pntData(Speaker *,int n);
void iptData(Speaker &);

int main(int argc, char** argv) {
    int spkrNum;
    string choice;
    int spk;
    do {
        cout<<"Input the number of speaker: ";
        cin>>spkrNum;
        if(spkrNum<10)
            cout<<"At least 10. Please input again!"<<endl;
    }while(spkrNum<10);
    //initialize the speaker
    Speaker *arr=initArr(spkrNum);
    do {
        do {
            //display menu
            cout<<endl<<"***********Menu***********"<<endl;
            cout<<"1.Input/Change information"<<endl;
            cout<<"2.Display all data"<<endl;
            cout<<"3.Exit the program"<<endl;
            cout<<"Input your choice(1, 2 or 3): ";
            cin>>choice;
            if(choice!="1"&&choice!="2"&&choice!="3")
                cout<<"Invalid input"<<endl;
        }while(choice!="1"&&choice!="2"&&choice!="3");
        
        if(choice=="1") {
            do {
                //ask user for edit which speaker
                cout<<"Input the number of the speaker(1 to "<<spkrNum<<"): ";
                cin>>spk;
                if(spk<1||spk>spkrNum)
                    cout<<"Invalid input"<<endl;
            }while(spk<1||spk>spkrNum);
            //edit
            iptData(arr[spk-1]);
        }
        //output all data
        if(choice=="2")
            pntData(arr,spkrNum);
        if(choice!="3") {
            cout<<"Press Enter to continue..."<<endl;
            cin.ignore();
            cin.ignore();
        }  
    }while(choice!="3");
    delete [] arr;
    arr=0;
    return 0;
}

//initialize
Speaker *initArr(int n) {
    Speaker *arr=new Speaker[n];
    for(int i=0;i<n;i++) {
        arr[i].fee=0;
        arr[i].name="";
        arr[i].number="";
        arr[i].speTopc="";
    }
    return arr;
}

//get the information of one speaker
void iptData(Speaker &sp) {
    bool valid;
    //get the name
    cout<<"Name: ";
    cin.ignore();
    getline(cin,sp.name);
    //get the telephone number
    do {
        valid=true;
        cout<<"Input the phone number: ";
        cin>>sp.number;
        for(int i=0;i<sp.number.length();i++) {
            if(sp.number.at(i)<48||sp.number.at(i)>57)
                valid=false;
        }
        if(!valid)
            cout<<"Invalid input"<<endl;
    }while(!valid);
    //get the speaking topic
    cout<<"Speaking topic: ";
    cin.ignore();
    getline(cin,sp.speTopc);
    //get the fee required
    do {
        cout<<"Fee required: ";
        cin>>sp.fee;
        if(sp.fee<0)
            cout<<"Invalid input"<<endl;
    } while(sp.fee<0);
    
}

//output all data
void pntData(Speaker *arr,int n) {
    for(int i=0;i<n;i++) {
        if(arr[i].name!="") {
            cout<<"Speaker #"<<(i+1)<<endl;
            cout<<"  Name: "<<arr[i].name<<endl;
            cout<<"  Phone number: "<<arr[i].number<<endl;
            cout<<"  Speaking topic: "<<arr[i].speTopc<<endl;
            cout<<"  Fee Required: "<<arr[i].fee<<endl;
        } else {
            cout<<"Speaker #"<<(i+1)<<": ";
            cout<<"Empty file"<<endl;
        }
        cout<<endl;
    }
}
