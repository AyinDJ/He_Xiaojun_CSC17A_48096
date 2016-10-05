/* 
 * File:   main.cpp
 * Author: Jimmy
 * Created on October 4, 2016, 11:58 PM
 * Purpose:Chapter 11 program 12
 */

#include <iostream>
#include <cstdlib>
#include <string>
#include <iomanip>
#include <fstream>
using namespace std;

#include "class.h";

Student getData(int);
void pntScro(Student);

int main(int argc, char** argv) {
    int tstNum,
        stuNum;
    
    
    //prompt user for the number of test
    do {
        cout<<"The number of test: ";
        cin>>tstNum;
        if(tstNum<1)
            cout<<"Invalid input"<<endl;
    } while(tstNum<1);
    
    
    //prompt user for the number of student
    do {
        cout<<"The number of student: ";
        cin>>stuNum;
        if(stuNum<1)
            cout<<"Invalid input"<<endl;
    } while(stuNum<1);
    
    //dynamic allocate memory for all student
    Student *stud=new Student[stuNum];
    
    //prompt user input data
    for(int i=0;i<stuNum;i++) {
        cout<<endl<<"Student #"<<(i+1)<<": "<<endl;
        stud[i]=getData(tstNum);
    }
    
    //output the result
    for(int i=0;i<stuNum;i++) {
        cout<<"Student #"<<(i+1)<<": ";
        pntScro(stud[i]);
    }
    
    //deallocate memory
    delete [] stud;
    stud=0;
    
    //Exit stage right
    return 0;
}


Student getData(int tstNum) {
    Student stu;
    stu.score=new int[tstNum];
    stu.ave=0;
    bool valid;
    //get the name
    cout<<"Name"<<": ";
    cin.ignore();
    getline(cin,stu.name);

    //get the id number
    do {
        valid=true;
        cout<<"Student ID: ";
        cin>>stu.id;
        //check the id number
        for(int j=0;j<stu.id.length();j++) {
            if(stu.id.at(j)<48||stu.id.at(j)>57)
                valid=false;
        }
        if(!valid)
            cout<<"Invalid input"<<endl;
    }while(!valid);

    for(int j=0;j<tstNum;j++) {
        do {
            cout<<"Test #"<<(j+1)<<": ";
            cin>>stu.score[j];
            if(stu.score[j]<0||stu.score[j]>100)
                cout<<"Invalid input"<<endl;
        } while(stu.score[j]<0||stu.score[j]>100);
        stu.ave+=stu.score[j];
    }
    //calculate the average
    stu.ave=stu.ave/static_cast<float>(tstNum);
    if(stu.ave>=91) {
        stu.grade='A';
    } else if(stu.ave>=81) {
        stu.grade='B';
    } else if(stu.ave>=71) {
        stu.grade='C';
    } else if(stu.ave>=61) {
        stu.grade='D';
    } else {
        stu.grade='F';
    }
    //deallocate memory
    delete [] stu.score;
    //return the structure
    return stu;
}

void pntScro(Student s) {
    cout<<"Name: "<<s.name<<"  ID: "<<s.id<<endl;
    cout<<"         Average test Score: "<<s.ave<<"  Course grade: "<<s.grade<<endl;
}