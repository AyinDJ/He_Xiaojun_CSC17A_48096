/* 
 * File:   main.cpp
 * Author: Jimmy
 * Created on November 30, 2016, 7:34 PM
 */

#include "Employee.h"
#include "ProductionWorker.h"
#include "TeamLeader.h"
using namespace std;


int main(int argc, char** argv) {
    TeamLeader lead1;
    int shift;
    double pay;
    int requiredHours,attendHours,Mbonus;
    cout<<"Required Traning Hours:"<<lead1.getTRequiredHours()<<endl;
    cout<<"Attended Traning Hours:"<<lead1.getTAttendHours()<<endl;
    return 0;
}

