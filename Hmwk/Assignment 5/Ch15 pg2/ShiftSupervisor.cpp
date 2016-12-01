/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ShiftSupervisor.cpp
 * Author: Jimmy
 * 
 * Created on November 30, 2016, 7:12 PM
 */

#include "ShiftSupervisor.h"

void ShiftSupervisor::setAnnualBonus(double bonus){
    AnnualBonus=bonus;
}
void ShiftSupervisor::setAnnualSalary(double sal){
    AnnualSalary=sal;
}
double ShiftSupervisor::getAnnualBonus(){
    return AnnualBonus;
}
double ShiftSupervisor::getAnnualSalary(){
    return AnnualSalary;
}

