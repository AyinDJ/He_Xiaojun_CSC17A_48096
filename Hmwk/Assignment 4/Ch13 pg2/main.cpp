/* 
 * File:   main.cpp
 * Author: Jimmy
 * Created on November 17, 2016, 9:16 PM
 * Ch13 pg2
 */

    #include <iostream>
    #include <iomanip>
    #include "Employee.h"
    using namespace std;
    int main()
    {
    	const int NUM_WORKERS = 3;
    	employeedata EMPLOYEE[NUM_WORKERS] ={
    		employeedata("Susan Meyers", 47899, "Accounting", "Vice President"),
    		employeedata("Mark Jones", 39119, "IT", "Programmer"),
    		employeedata("Joy Rogers", 81774, "Manufacturing", "Engineer")};
    		cout << " NAME	ID NUMBER	DEPARTMENT	POSITION\n";
    		cout << "-------------------------------------------\n";
    		for (int i = 0; i < NUM_WORKERS; i++)
    		{
    			cout << setw(8) << EMPLOYEE[i].getName();
    			cout << setw(8) << EMPLOYEE[i].getIdnumber();
    			cout << setw(8) << EMPLOYEE[i].getDepartment();
    			cout << setw(8) << EMPLOYEE[i].getPosition() << endl;
    		}
    		return 0;
    }

