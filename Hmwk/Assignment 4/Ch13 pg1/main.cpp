/* 
 * File:   main.cpp
 * Author: Jimmy
 * Created on November 17, 2016, 7:28 PM
 * Ch13 pg1
 */

#include <iostream>
using namespace std;

#include "Date.h";

int main(int argc, char** argv) {
    int year;
    int month;
    int day;
    bool invalid;
    int dyInMth[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    cout<<"Please input a date"<<endl;
    cout<<"Year: ";
    cin>>year;
    
    do {
        cout<<"Month: ";
        cin>>month;
        if(month<1||month>12)
            cout<<"Please enter the number between 1 and 12! "<<endl;
    }while(month<1||month>12);
    
    do {
        invalid=false;
        cout<<"Day: ";
        cin>>day;
        
        if(day<1||day>dyInMth[month])
            invalid=true;
        if(month==2&&day==29&&(year%400==0||(year%4==0&&year%100!=0)))
            invalid=false;
        if(invalid) cout<<"Please enter the correct number! "<<endl;
    }while(invalid);
    
    Date date(year,month,day);
    date.pntDate();
    cout<<"Change the day to 1997/6/18"<<endl;
    date.setYear(1997);
    date.setMonth(6);
    date.setDay(21);
    date.pntDate();
    
    return 0;
}

