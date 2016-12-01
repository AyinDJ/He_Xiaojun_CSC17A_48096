/* 
 * File:   main.cpp
 * Author: Jimmy
 * Created on November 30, 2016, 4:21 PM
 * Ch15 pg1
 */

#include "Employee.h"
#include "ProductionWorker.h"
using namespace std;

int main(int argc, char** argv) {
    int shift;
    double pay;
    
    cout <<" 1-DayShift \n 2-Night"<<endl;
    cout <<"Enter shift:";
    cin  >>shift;
    cout <<"Enter hourly pay:";
    cin  >>pay;
    
    ProductionWorker emp1(shift,pay);
    Employee emp;
    
    emp.setEmpName("Jason");
    emp.setEmpNumber(9527);
    emp.setHireDate("July:5");
    
    cout <<"Employee Deatils:"  <<endl<<endl;
    cout <<"Employee Name:"     <<emp.getEmpName()<<endl;
    cout <<"Employee Number:"   <<emp.getEmpNumber()<<endl;
    cout <<"Employee Hire Date:"<<emp.getHireDate()<<endl;
    cout <<"Employee Shift:"    <<emp1.getShift()<<endl;
    cout <<"Employee HourlyPay:"<<emp1.getHourlyPay()<<endl;

    return 0;
}

