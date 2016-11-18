/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Employee.h
 * Author: Jimmy
 *
 * Created on November 17, 2016, 10:56 PM
 */

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
#include <string>

class Employee{
    private:
        string Name;
        int IdNumber;
        string Department;
        string Position;
    public:
    	Employee(string AssignName,int AssignIdNumber,string AssignDepartment,string AssignPosition);                 
    	Employee(string AssignName,int AssignIdNumber);
    	Employee();
        void setName(string);
    	void setIdNumber(int);
    	void setDepartment(string);
    	void setPosition(string);
    	string getName() const;
    	int getIdNumber() const;
    	string getDepartment() const;
    	string getPosition () const;
    };

#endif /* EMPLOYEE_H */

