/* 
 * File:   day.h
 * Author: Jimmy
 * Created on November 18, 2016, 1:56 AM
 * Ch14 pg4
 */

#ifndef DAY_H
#define DAY_H

class NumDays {
    private:
        int hours;
        float days;
        void calDays();
    public:
        NumDays(int);
        void setHour(int);
        int getHour() const {return hours;}
        float getDay() const {return days;}
        NumDays operator+(const NumDays &);
        NumDays operator-(const NumDays &);
        NumDays operator++(int);
        NumDays operator--(int);
        NumDays operator++();
        NumDays operator--();
        void pntDays();
        
};

#endif /* DAY_H */

