/* 
 * File:   Employee.cpp
 * Author: Jimmy
 * Created on November 30, 2016, 7:36 PM
 */

#include "Employee.h"

void Employee::setEmpName(string str){
    EmpName=str;
}
void Employee::setEmpNumber(int num){
    EmpNumber=num;
}
void Employee::setHireDate(string date){
    Hiredate=date;
}
string Employee::getEmpName(){
    return EmpName;
}
int Employee::getEmpNumber(){
    return EmpNumber;
}
string Employee::getHireDate(){
    return Hiredate;
}
