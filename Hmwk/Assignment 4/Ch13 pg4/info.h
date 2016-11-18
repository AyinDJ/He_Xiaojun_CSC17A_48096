/* 
 * File:   info.h
 * Author: Jimmy
 * Created on November 17, 2016, 11:18 PM
 * Ch13 pg4
 */

#ifndef INFO_H
#define INFO_H

class info {
    private:
        string name;
        string address;
        string number;
        int age;
    public:
        info(string,string,string,int);
        void setName(string);
        void setAddr(string);
        void setNum(string);
        void setAge(int);
        void pntInfo() const;
        string getName() const {return name;}
        string getAddr() const {return address;}
        string getNum() const{return number;}
        int getAge() const {return age;}
};

#endif /* INFO_H */

