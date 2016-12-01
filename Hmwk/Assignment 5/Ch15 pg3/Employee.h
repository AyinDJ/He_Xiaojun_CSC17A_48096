/* 
 * File:   Employee.h
 * Author: Jimmy
 * Created on November 30, 2016, 7:36 PM
 */

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
#include <string>
using namespace std;

class Employee{
private:string EmpName;
        int EmpNumber;
        string Hiredate;
public: Employee(){
            EmpName=" ";
            EmpNumber=0;
            Hiredate=" ";
        }
        Employee(string name, int number,string date){
            EmpName=name;
            EmpNumber=number;
            Hiredate=date;
        }
        void setEmpName(string);
        void setEmpNumber(int);
        void setHireDate(string);
        string getEmpName();
        int getEmpNumber();
        string getHireDate();
};

#endif /* EMPLOYEE_H */

