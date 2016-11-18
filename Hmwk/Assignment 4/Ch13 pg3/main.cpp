/* 
 * File:   main.cpp
 * Author: Jimmy
 * Created on November 17, 2016, 11:01 PM
 * ch13 pg3
 */

#include "Car.h"
using namespace std;

int main(){
    int Speed = 0; //Start Cars speed at zero. 
    char choice; //Menu selection
    cout << "The speed of the SUV is set to: " << Speed <<endl;
    Car first( 2007, "GMC", Speed);
    //Display the menu and get a valid selection
    do{
        displayMenu();
    	cin >> choice;
    	while(toupper(choice) < 'A' || toupper(choice) > 'C'){
    		cout << "Please make a choice of A or B or C:";
    		cin >> choice;
    	}
    	
    		
    	switch (choice){
            case 'a':
            case 'A': cout << "You are accelerating the car. ";
		cout << Accelerate(first) << endl;
		break;
            case 'b':
            case 'B': cout << "You have choose to push the brake.";
		cout << Brake(first) << endl;
		break;
            }
	}while (toupper(choice) != 'C');
    return 0;
}

