/* 
 * File:   item.h
 * Author: Jimmy
 * Created on November 17, 2016, 11:28 PM
 * Ch13 pg5
 */

#ifndef ITEM_H
#define ITEM_H

#include <string>
using namespace std;

class RetailItem {
    private:
        string desc;//description of item
        int numUnit;//An integer that holds the number of units currently in inventory.
        float price;//retail price
    public:
        RetailItem(string,int,float);
        void setDesc(string);
        void setUnit(int);
        void setPric(float);
        string getDesc() const {return desc;}
        int getUnit() const {return numUnit;}
        float getPric() const {return price;}
        void pntItem() const;
};

#endif /* ITEM_H */

