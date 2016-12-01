/* 
 * File:   TeamLeader.h
 * Author: Jimmy
 * Created on November 30, 2016, 7:40 PM
 */

#ifndef TEAMLEADER_H
#define TEAMLEADER_H

class TeamLeader{
    private:double MonthlyBonus;
            int TRequiredHours;
            int TAttendHours;
    public: TeamLeader(){
            MonthlyBonus=0.0;
            TRequiredHours=0;
            TAttendHours=0;
            }
    TeamLeader(double Mbonus,int TRhours,int TAhours){
            MonthlyBonus=Mbonus;
            TRequiredHours=TRhours;
            TAttendHours=TAhours;
            }
    void setMonthlyBonus(double);
    void setTRequiredHours(int);
    void setTAttendHours(int);
    double getMonthlyBonus();
    int getTRequiredHours();
    int getTAttendHours();
};

#endif /* TEAMLEADER_H */

