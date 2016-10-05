/* 
 * File:   main.cpp
 * Author: Jimmy
 * Created on October 4, 2016, 5:07 PM
 * Purpose:Chapter 11 program 5
 */

#include <iostream>
#include <cstdlib>
#include <string>
#include <iomanip>
#include <fstream>
using namespace std;

#include "Weather.h"

enum MTH{ JANUARY,FEBRUARY,MARCH,APRIL,MAY,JUNE,
            JULY,AUGUST,SEPTEMBER,OCTOBER,NOVEMBER,DECEMBER};
    
void displaymonth(MTH);
            
int main(int argc, char** argv) {
    const int SIZE=12;
    Weather month[SIZE];
    MTH name;
    for(int name=JANUARY;name<=DECEMBER;name++) {
        cout<<"Month #";
        displaymonth(MTH(name));
        cout<<": "<<endl;
        //get the total rainfall and check
        do {
            cout<<"Total Rainfall(mm): ";
            cin>>month[name].total;
            if(month[name].total<0)
                cout<<"Invalid input!"<<endl;
        } while(month[name].total<0);
        //get the high temperature and check
        do {
            cout<<"High temperature(F): ";
            cin>>month[name].high;
            if(month[name].high<-100||month[name].high>140)
                cout<<"Invalid input!"<<endl;
        } while(month[name].high<-100||month[name].high>140);
        //get the low temperature and check
        do {
            cout<<"Low temperature(F): ";
            cin>>month[name].low;
            if(month[name].low<-100||month[name].low>140)
                cout<<"Invalid input!"<<endl;
            if(month[name].low>month[name].high)
                cout<<"Invalid input!"<<endl;
                cout<<"Low temp cannot greater than high temp!"<<endl;
        } while(month[name].low<-100||month[name].low>140||month[name].low>month[name].low);
        
        //calculate the average temperature
        month[name].average=0.5f*(month[name].high+month[name].low);    
    }
    
    
    
    int yeartotal=0;//total rainfall in a year
    float averain=0;//average rainfall each month
    float avetem=0;//average temperature
    int highest=month[0].high;//highest temperature
    int lowest=month[0].low;//lowest temperature
    int indexh=0,indexl=0;//the index for lowest and highest
    for(int name=JANUARY;name<DECEMBER;name++) {
        //sum all total rainfall
        yeartotal+=month[name].total;
        avetem+=month[name].average;//average temperature
        if(month[name].high>highest) {
            highest=month[name].high;
            indexh=name;
        } else if(month[name].low<lowest) {
            lowest=month[name].low;
            indexl=name;
        }
    }
    //calculate average temperature and average rainfall
    avetem=static_cast<float>(avetem)/SIZE;
    averain=static_cast<float>(yeartotal)/SIZE;
    
    //output the results
    cout<<setprecision(2)<<fixed;
    cout<<"The average monthly rainfall(mm) is "<<averain<<endl;
    cout<<"The total rainfall(mm) for the year is "<<yeartotal<<endl;
    cout<<"Highest temperature(F) is "<<highest<<" in "
            <<"Month "<<"#"<<(indexh+1)<<endl;
    cout<<"Lowest temperature(F) is "<<lowest<<" in "
            <<"Month "<<"#"<<(indexl+1)<<endl;
    cout<<"The average of temperatures(F) is "<<avetem<<endl;
    return 0;
}

void displaymonth(MTH m){
    switch(m){
        case JANUARY    : cout <<"JANUARY";
        break;
        case FEBRUARY    : cout <<"FEBRUARY";
        break;
        case MARCH    : cout <<"MARCH";
        break;
        case APRIL    : cout <<"APRIL";
        break;
        case MAY    : cout <<"MAY";
        break;
        case JUNE    : cout <<"JUNE";
        break;
        case JULY    : cout <<"JULY";
        break;
        case AUGUST    : cout <<"AUGUST";
        break;
        case SEPTEMBER    : cout <<"SEPTEMBER";
        break;
        case OCTOBER    : cout <<"OCTOBER";
        break;
        case NOVEMBER    : cout <<"NOVEMBER";
        break;
        case DECEMBER    : cout <<"DECEMBER";
    }
}

