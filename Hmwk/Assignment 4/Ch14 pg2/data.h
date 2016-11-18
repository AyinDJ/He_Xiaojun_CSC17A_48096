/* 
 * File:   data.h
 * Author: Jimmy
 * Created on November 18, 2016, 1:11 AM
 * Ch14 pg2
 */

#ifndef DATA_H
#define DATA_H

class DayOfYear {
    private:
        int day;
        static string result;
        static void tran(int);//translate
    public: 
        DayOfYear(int);
        static void print();//output result
};

#endif /* DATA_H */

