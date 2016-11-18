/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   number.h
 * Author: Jimmy
 *
 * Created on November 18, 2016, 12:33 AM
 */

#ifndef NUMBER_H
#define NUMBER_H

#include <string>
class Numbers {
    private:
        int number;
        static string res;
        static void trans(int);
    public:
        Numbers();
        Numbers(int);
        static void print();
        
};

#endif /* NUMBER_H */

