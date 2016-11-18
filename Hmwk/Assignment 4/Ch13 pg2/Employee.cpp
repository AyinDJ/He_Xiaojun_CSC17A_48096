/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Employee.cpp
 * Author: Jimmy
 * 
 * Created on November 17, 2016, 10:56 PM
 */

#include "Employee.h"
#include <iostream>
#include <string>
using namespace std;

    void Employee::setName(string NA)
    {
    	Name = NA;
    }
    void Employee::setIdNumber(int ID)
    {
    	IdNumber = ID;
    }
    void Employee::setDepartment(string DEP)
    {
    	Department = DEP;
    }
    void Employee::setPosition (string POS)
    {
    	Position = POS;
    }
    string Employee::getName() const
    {
    	return Name;
    }
    int Employee::getIdNumber() const
    {
    	return IdNumber;
    }
    string Employee::getDepartment() const
    {
    	return Department;
    }
    string Employee::getPosition() const
    {
    	return Position;
    }

