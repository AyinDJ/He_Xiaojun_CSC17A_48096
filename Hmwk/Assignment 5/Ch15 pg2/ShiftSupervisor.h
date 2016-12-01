/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ShiftSupervisor.h
 * Author: Jimmy
 *
 * Created on November 30, 2016, 7:12 PM
 */

#ifndef SHIFTSUPERVISOR_H
#define SHIFTSUPERVISOR_H

class ShiftSupervisor{
private:double AnnualSalary;
        double AnnualBonus;
public: ShiftSupervisor(){
        AnnualSalary=0.0;
        AnnualBonus=0.0;
        }
        ShiftSupervisor(double sal,double bonus){
            AnnualSalary=sal;
            AnnualBonus=bonus;
        }
public: void setAnnualSalary(double);
        void setAnnualBonus(double);
        double getAnnualSalary();
        double getAnnualBonus();
};

#endif /* SHIFTSUPERVISOR_H */

