/* 
 * File:   main.cpp
 * Author: Jimmy
 * Created on October 18, 2016, 6:15 PM
 * Purpose:Chapter 12 program 2
 */

#include <iostream>
#include <fstream>
#include <vector> 

using namespace std;

int main(int argc, char** argv) {
	const int size = 24;
	int count = 0;
	fstream inputFile;
	string filename, input;

	cout << "Please enter the name of the file: ";
	getline(cin, filename);
	inputFile.open(filename, ios::in);

	while (!inputFile){
		cout << "File not found! Please try again: ";
		getline(cin, filename);
		inputFile.open(filename, ios::in);
	}

	cout << endl;
	getline(inputFile, input);
	while (inputFile){
		count++;
		cout << count << ". " << input << endl;
		getline(inputFile, input);
		if (count % size == 0){
			cout << endl << "Hit ENTER to display more...\n\n";
			cin.get();
		}
	}
		
	cout << "The entire file has been displayed!"<<endl;

	inputFile.close();

	cout << "ENTER to exit the program."<<endl;
	cin.get();

    return 0;
}

