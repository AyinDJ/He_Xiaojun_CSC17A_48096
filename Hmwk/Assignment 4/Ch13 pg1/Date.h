/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Date.h
 * Author: Jimmy
 *
 * Created on November 17, 2016, 7:30 PM
 */

#ifndef DATE_H
#define DATE_H

class Date {
    
    private:
        int year;//year
        int month;//month
        int day;//day
    public:
        Date(int year,int month,int day);
        void setYear(int year);
        void setMonth(int month);
        void setDay(int day);
        void pntDate();
};

#endif /* DATE_H */

