/* 
 * File:   main.cpp
 * Author: Jimmy
 * Created on November 30, 2016, 4:51 PM
 * Ch15 pg2
 */

#include "Employee.h"
#include "ShiftSupervisor.h"

int main(int argc, char** argv) {
    ShiftSupervisor emp1;
    string name;
    string date;
    double Abonus,Asalary;
    
    Employee emp;
//    ShiftSupervisor emp1;
    
    cout <<"Enter Employee Name:";
    cin  >>name;
    emp.setEmpName(name);
    emp.setEmpNumber(9527);
    emp.setHireDate("July 5");
    cout <<"Enter Anual Bonus:";
    cin  >>Abonus;
    emp1.setAnnualBonus(Abonus);
    cout <<"Enter Anual Salary:";
    cin  >>Asalary;
    emp1.setAnnualSalary(Asalary);

    cout <<"----Shift Supervisor Deatils----"  <<endl;
    cout <<"Employee Name:"     <<emp.getEmpName()<<endl;
    cout <<"Employee Number:"   <<emp.getEmpNumber()<<endl;
    cout <<"Employee Hire Date:"<<emp.getHireDate()<<endl;
    cout <<"Enter Annual salary:"<<emp1.getAnnualSalary()<<endl;
    cout <<"enter Annual Bonus:"<<emp1.getAnnualBonus()<<endl;

    return 0;
}

