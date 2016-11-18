/* 
 * File:   day.h
 * Author: Jimmy
 * Created on November 18, 2016, 2:15 AM
 * Ch14 pg3
 */

#ifndef DAY_H
#define DAY_H

class DayOfYr {
    private:
        int day;
        static string result;
        static void translt(int);//translate
    public: 
        DayOfYr(int);
        DayOfYr(string,int);
        static void print();//output result
        DayOfYr operator++();
        DayOfYr operator++(int);
        DayOfYr operator--();
        DayOfYr operator--(int);
};
#endif /* DAY_H */

