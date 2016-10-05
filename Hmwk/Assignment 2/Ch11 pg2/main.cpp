/* 
 * File:   main.cpp
 * Author: Jimmy
 * Created on October 4, 2016, 11:50 AM
 * Purpose :Chapter 11 program 2
 */

#include <iostream>
#include <cstdlib>
#include <string>
#include <iomanip>
#include <fstream>
using namespace std;

#include "MovieData.h"

void printout(MovieData);

int main(int argc, char** argv) {
    MovieData first;
    MovieData second;
    
    cout<<"What is the title for first movie? ";
    getline(cin,first.title);
    cout<<"Who is director? ";
    getline(cin,first.dirc);
    cout<<"When was it released ? (year) ";
    cin>>first.yearrel;
    cout<<"How long was it by minutes? ";
    cin>>first.runtime;
    cout <<"what was the cost to make this film?";
    cin >>first.cost;
    cout <<"what was the first year revenue of this movie?";
    cin >>first.reve;
    cin.ignore(20,'\n');
    
    cout<<"What is the title for second movie? ";
    getline(cin,second.title);
    cout<<"Who is director? ";
    getline(cin,second.dirc);
    cout<<"When was it released ? (year) ";
    cin>>second.yearrel;
    cout<<"How long was it by minutes? ";
    cin>>second.runtime;
    cout <<"what was the cost to make this film?";
    cin >>first.cost;
    cout <<"what was the first year revenue of this movie?";
    cin >>first.reve;
    cout<<endl;
    
    printout(first);
    printout(second);
    
    return 0;
}

void printout( MovieData number ){
    cout<<left;
    cout <<setw(20)<<"Title: "<<number.title<<endl;
    cout <<setw(20)<<"Director: "<<number.dirc<<endl;
    cout <<setw(20)<<"Year released: "<<number.yearrel<<endl;
    cout <<setw(20)<<"Length: "<<number.runtime<<endl;
    cout <<setw(20)<<"NET PROFIT: "<< number.reve - number.cost<<endl;
    cout<<endl;
    
}

