/* 
 * File:   ProductionWorker.h
 * Author: Jimmy
 * Created on November 30, 2016, 7:39 PM
 */

#ifndef PRODUCTIONWORKER_H
#define PRODUCTIONWORKER_H

class ProductionWorker{
private:int Shift;
        double HourlyPay;
public: ProductionWorker(){
        Shift=0;
        HourlyPay=0;
        }
        ProductionWorker(int sh,double pay){
            Shift=sh;
            HourlyPay=pay;
        }
        void setShift(int);
        void setHourlyPay(double);
        int getShift();
        double getHourlyPay();
};

#endif /* PRODUCTIONWORKER_H */

