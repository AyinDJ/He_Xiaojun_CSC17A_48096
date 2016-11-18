/* 
 * File:   Car.cpp
 * Author: Jimmy
 * Created on November 17, 2016, 11:04 PM
 * ch13 pg3
 */

#include "Car.h"
using namespace std;

Car::Car(int YearofModel, string Makeby, int Spd)
    {
    YearModel = YearofModel;
    Make = Makeby;
    Speed = Spd;
    }

string Car::getMake()
    {
    	return Make;
    }

int Car::getModel()
    {
    	return YearModel;
    }

int Car::getSpeed()
    {
    	return Speed;
    }
    
void Car::Accelerate()
    {
    	Speed = Speed + 5;
    }
    
void Car::Brake() 
    {
    	Speed = Speed - 5;
    }

void displayMenu()
    {
    	cout <<"\n				Menu\n";
    	cout << "----------------------------\n";
    	cout << "A)Accelerate the Car\n";
    	cout << "B)Push the Brake on the Car\n";
    	cout << "C)Exit the program\n\n";
    	cout << "Enter your choice: ";
    }

