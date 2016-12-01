/* 
 * File:   ProductionWorker.cpp
 * Author: Jimmy
 * 
 * Created on November 30, 2016, 4:23 PM
 */

#include "ProductionWorker.h"

void ProductionWorker::setShift(int sh){
    Shift=sh;
}
void ProductionWorker::setHourlyPay(double pay){
    HourlyPay=pay;
}
int ProductionWorker::getShift(){
    return Shift;
}
double ProductionWorker::getHourlyPay(){
    return HourlyPay;
}

