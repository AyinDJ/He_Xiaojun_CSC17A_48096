/* 
 * File:   item.cpp
 * Author: Jimmy
 * Created on November 17, 2016, 11:28 PM
 * Ch13 pg5
 */

#include <string>
#include <iostream>
#include "item.h"
using namespace std;

RetailItem::RetailItem(string d, int n, float p) {
    desc=d;
    numUnit=n;
    price=p;
}

void RetailItem::setDesc(string d) {
    desc=d;
}
void RetailItem::setUnit(int n) {
    numUnit=n;
}
void RetailItem::setPric(float p) {
    price=p;
}
void RetailItem::pntItem() const {
    cout<<getDesc()<<"          "<<getUnit()<<"           "<<"$"<<getPric()<<endl;
}

