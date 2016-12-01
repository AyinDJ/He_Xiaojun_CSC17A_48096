/* 
 * File:   TeamLeader.cpp
 * Author: Jimmy
 * Created on November 30, 2016, 7:40 PM
 */

#include "TeamLeader.h"

void TeamLeader::setMonthlyBonus(double MBonus){
    MonthlyBonus=MBonus;
}
void TeamLeader::setTAttendHours(int Ahours){
    TRequiredHours=Ahours;
}
void TeamLeader::setTRequiredHours(int Rhours){
    TAttendHours=Rhours;
}
double TeamLeader::getMonthlyBonus(){
    return MonthlyBonus;
}
int TeamLeader::getTAttendHours(){
    return TRequiredHours;
}
int TeamLeader::getTRequiredHours(){
    return TAttendHours;
}

