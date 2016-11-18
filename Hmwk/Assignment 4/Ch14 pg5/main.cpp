/* 
 * File:   main.cpp
 * Author: Jimmy
 * Created on November 18, 2016, 2:45 AM
 * Ch14 pg5
 */

#include <iostream>
using namespace std;

class NumDays{
    private:
        float hours;
        float days;
    public:
        NumDays(){
            hours=0;
            days=0;
        }
        NumDays(float hr){
            hours =hr;
            days=hr/8;
        }
        void setHours(float hr){
            hours=hr;
            days=hr/8;
        }
        float getHours()const{
            return hours;
        }
        void setDays(float dl){
            days=dl;
            hours=dl/8;
        }
        float getDays()const{
            return days;
        }
        NumDays operator + (NumDays& x){
            NumDays op;
            op.setHours(this->getHours()+x.getHours());
            return op;
        }
        NumDays operator + (NumDays& y){
            NumDays op;
            op.setHours(this->getHours()+y.getHours());
            return op;
        }
        NumDays &operator ++(){
            this->setHours(this->getHours()+1);
            return*this;
        }
        const NumDays operator ++(int){
            NumDays op =*this;
            this->setHours(this->getHours()+1);
            return op;
        }
        NumDays &operator --(){
            this->setHours(this->getHours()-1);
            return*this;
        }
        const NumDays operator --(int){
            NumDays result =*this;
            this->setHours(this->getHours()-1);
            return result;
        }
};
int main(int argc, char** argv) {
    NumDays nd1(25), nd2(15),Z, add, sub;
    
    cout<<"25 hours converted to days = "<<nd1.getDays()<<endl;
    cout<<"15 hours converted to days = "<<nd2.getDays()<<endl;
    
    add=nd1 + nd2;
    sub=nd1 - nd2;
    
    cout<<"The addition is "<<add.getDays()<<endl;
    cout<<"The subtraction is "<<sub.getDays()<<endl;
    
    Z=++add;
    cout<<"Prefix Increment is "<<Z.getDays()<<endl;
    
    Z=add++;
    cout<<"Postfix Increment is "<<Z.getDays()<<endl;
    
    Z=--add;
    cout<<"Prefix Decrement is "<<Z.getDays()<<endl;
    
    Z=add--;
    cout<<"Postfix Decrement is "<<Z.getDays()<<endl;
    return 0;
}

