/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Car.h
 * Author: Jimmy
 * Created on November 17, 2016, 11:04 PM
 * Ch13 pg3
 */

#ifndef CAR_H
#define CAR_H

#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

class Car
    {
    private:
    	int YearModel;
    	int Speed;
    	string Make;
    public:
    	Car(int, string, int);
    	string getMake();
    	int getModel();
    	int getSpeed();
    	void Accelerate();
    	void Brake();
    	void displayMenu();
    };

#endif /* CAR_H */

