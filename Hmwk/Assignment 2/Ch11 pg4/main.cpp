/* 
 * File:   main.cpp
 * Author: Jimmy
 * Created on October 4, 2016, 4:47 PM
 * Purpose:Chapter 11 program 4
 */

#include <iostream>
#include <cstdlib>
#include <string>
#include <iomanip>
#include <fstream>
using namespace std;

#include "Weather.h"

int main(int argc, char** argv) {
    const int SIZE=3;
    Weather month[SIZE];
    for(int i=0;i<SIZE;i++) {
        cout<<"Month #"<<(i+1)<<": "<<endl;
        //get the total rainfall and check
        do {
            cout<<"Total Rainfall(mm): ";
            cin>>month[i].total;
            if(month[i].total<0)
                cout<<"Invalid input!"<<endl;
        } while(month[i].total<0);
        //get the high temperature and check
        do {
            cout<<"High temperature(F): ";
            cin>>month[i].high;
            if(month[i].high<-100||month[i].high>140)
                cout<<"Invalid input!"<<endl;
        } while(month[i].high<-100||month[i].high>140);
        //get the low temperature and check
        do {
            cout<<"Low temperature(F): ";
            cin>>month[i].low;
            if(month[i].low<-100||month[i].low>140)
                cout<<"Invalid input!"<<endl;
            if(month[i].low>month[i].high)
                cout<<"Invalid input!"<<endl;
                cout<<"Low temp cannot greater than high temp!"<<endl;
        } while(month[i].low<-100||month[i].low>140||month[i].low>month[i].low);
        
        //calculate the average temperature
        month[i].average=0.5f*(month[i].high+month[i].low);    
    }
    
    
    
    int yeartotal=0;//total rainfall in a year
    float averain=0;//average rainfall each month
    float avetem=0;//average temperature
    int highest=month[0].high;//highest temperature
    int lowest=month[0].low;//lowest temperature
    int indexh=0,indexl=0;//the index for lowest and highest
    for(int i=0;i<SIZE;i++) {
        //sum all total rainfall
        yeartotal+=month[i].total;
        avetem+=month[i].average;//average temperature
        if(month[i].high>highest) {
            highest=month[i].high;
            indexh=i;
        } else if(month[i].low<lowest) {
            lowest=month[i].low;
            indexl=i;
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
