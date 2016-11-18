/* 
 * File:   Date.cpp
 * Author: Jimmy
 * 
 * Created on November 17, 2016, 7:30 PM
 */

#include "Date.h"
#include <iostream>
#include <string>
using namespace std;

Date::Date(int year, int month, int day) {
    this->year=year;
    this->month=month;
    this->day=day;
}

void Date::setDay(int day) {
    bool invalid=false;
    int dyInMth[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    if(day<1||day>dyInMth[month])
            invalid=true;
    if(month==2&&day==29&&(year%400==0||(year%4==0&&year%100!=0)))
            invalid=false;
    if(!invalid)
        this->day=day;
    else 
        cout<<"Invalid input for day"<<endl;
}

void Date::setMonth(int month) {
    if(month>0&&month<=12)
        this->month=month;
    else 
        cout<<"Invalid input for month"<<endl;
}

void Date::setYear(int year) {
    this->year=year;
}

void Date::pntDate() {
    string months="";
    switch(month) {
        case 1: months="January"; break;
        case 2: months="February"; break;
        case 3: months="March"; break;
        case 4: months="April"; break;
        case 5: months="May"; break;
        case 6: months="June"; break;
        case 7: months="July"; break;
        case 8: months="August"; break;
        case 9: months="September"; break;
        case 10: months="October"; break;
        case 11: months="November"; break;
        case 12: months="December"; break;
        default:;
    }
    cout<<endl;
    cout<<month<<"/"<<day<<"/"<<year<<endl;
    cout<<month<<" "<<day<<", "<<year<<endl;
    cout<<day<<" "<<month<<" "<<year<<endl;
}

