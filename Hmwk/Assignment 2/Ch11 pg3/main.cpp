/* 
 * File:   main.cpp
 * Author: Jimmy
 * Created on October 4, 2016, 2:01 PM
 * Purpose:Chapter 11 program 3
 */

#include <iostream>
#include <cstdlib>
#include <string>
#include <iomanip>
#include <fstream>
using namespace std;

#include "SaleData.h"

void Output(Sales);


int main(int argc, char** argv) {
    Sales north;
    Sales east;
    Sales west;
    Sales south;

    
    //north
    cout << "North Division: "<<endl;
    north.name="North";
    cout << "What are the first quarter sales?"<<endl;
    cin >> north.first;
    do{
        if(north.first<0){
            cout<<"Do not enter the negative number!"<<endl;
            cout << "What are the first quarter sales?"<<endl;
            cin >> north.first;
        }
    }while(north.first<0);
    cout <<"What are the second quarter sales?"<<endl;
    cin >> north.second;
    do{
        if(north.second<0){
            cout<<"Do not enter the negative number!"<<endl;
            cout << "What are the second quarter sales?"<<endl;
            cin >> north.second;
        }
    }while(north.second<0);
    cout <<"What are the third quarter sales?"<<endl;
    cin >> north.third;
    do{
        if(north.third<0){
            cout<<"Do not enter the negative number!"<<endl;
            cout << "What are the third quarter sales?"<<endl;
            cin >> north.third;
        }
    }while(north.third<0);
    cout <<"What are the fourth quarter sales?"<<endl;
    cin >>north.fourth;
    do{
        if(north.fourth<0){
            cout<<"Do not enter the negative number!"<<endl;
            cout << "What are the fourth quarter sales?"<<endl;
            cin >> north.fourth;
        }
    }while(north.fourth<0);
    north.total=north.first+north.second+north.third+north.fourth;
    north.average=north.total/4;
    

    //east
    cout << "East Division: "<<endl;
    east.name="East";
    cout << "What are the first quarter sales?"<<endl;
    cin >> east.first;
    do{
        if(east.first<0){
            cout<<"Do not enter the negative number!"<<endl;
            cout << "What are the first quarter sales?"<<endl;
            cin >> east.first;
        }
    }while(east.first<0);
    cout <<"What are the second quarter sales?"<<endl;
    cin >> east.second;
    do{
        if(east.second<0){
            cout<<"Do not enter the negative number!"<<endl;
            cout << "What are the second quarter sales?"<<endl;
            cin >> east.second;
        }
    }while(east.second<0);
    cout <<"What are the third quarter sales?"<<endl;
    cin >> east.third;
    do{
        if(east.third<0){
            cout<<"Do not enter the negative number!"<<endl;
            cout << "What are the third quarter sales?"<<endl;
            cin >> east.third;
        }
    }while(east.third<0);
    cout <<"What are the fourth quarter sales?"<<endl;
    cin >>east.fourth;
    do{
        if(east.fourth<0){
            cout<<"Do not enter the negative number!"<<endl;
            cout << "What are the fourth quarter sales?"<<endl;
            cin >> east.fourth;
        }
    }while(east.fourth<0);
    east.total=east.first+east.second+east.third+east.fourth;
    east.average=east.total/4;
    
    
    
    //West
    cout << "West Division: "<<endl;
    west.name="West";
    cout << "What are the first quarter sales?"<<endl;
    cin >> west.first;
    do{
        if(west.first<0){
            cout<<"Do not enter the negative number!"<<endl;
            cout << "What are the first quarter sales?"<<endl;
            cin >> west.first;
        }
    }while(west.first<0);
    cout <<"What are the second quarter sales?"<<endl;
    cin >> west.second;
    do{
        if(west.second<0){
            cout<<"Do not enter the negative number!"<<endl;
            cout << "What are the second quarter sales?"<<endl;
            cin >> west.second;
        }
    }while(west.second<0);
    cout <<"What are the third quarter sales?"<<endl;
    cin >> west.third;
    do{
        if(west.third<0){
            cout<<"Do not enter the negative number!"<<endl;
            cout << "What are the third quarter sales?"<<endl;
            cin >> west.third;
        }
    }while(west.third<0);
    cout <<"What are the fourth quarter sales?"<<endl;
    cin >>west.fourth;
    do{
        if(west.fourth<0){
            cout<<"Do not enter the negative number!"<<endl;
            cout << "What are the fourth quarter sales?"<<endl;
            cin >> west.fourth;
        }
    }while(west.fourth<0);
    west.total=west.first+west.second+west.third+west.fourth;
    west.average=west.total/4;
    
    
    
    //south
    cout << "South Division: "<<endl;
    south.name="South";
    cout << "What are the first quarter sales?"<<endl;
    cin >> south.first;
    do{
        if(south.first<0){
            cout<<"Do not enter the negative number!"<<endl;
            cout << "What are the first quarter sales?"<<endl;
            cin >> south.first;
        }
    }while(south.first<0);
    cout <<"What are the second quarter sales?"<<endl;
    cin >> south.second;
    do{
        if(south.second<0){
            cout<<"Do not enter the negative number!"<<endl;
            cout << "What are the second quarter sales?"<<endl;
            cin >> south.second;
        }
    }while(south.second<0);
    cout <<"What are the third quarter sales?"<<endl;
    cin >> south.third;
    do{
        if(south.third<0){
            cout<<"Do not enter the negative number!"<<endl;
            cout << "What are the third quarter sales?"<<endl;
            cin >> south.third;
        }
    }while(south.third<0);
    cout <<"What are the fourth quarter sales?"<<endl;
    cin >>south.fourth;
    do{
        if(south.fourth<0){
            cout<<"Do not enter the negative number!"<<endl;
            cout << "What are the fourth quarter sales?"<<endl;
            cin >> south.fourth;
        }
    }while(south.fourth<0);
    south.total=south.first+south.second+south.third+south.fourth;
    south.average=south.total/4;
    
    
   
    Output(north);
    
    Output(east);
    
    Output(west);
    
    Output(south);
    //Exit
    return 0;
}

void Output( Sales number ){
    
    cout <<endl;
    cout<<left;
    cout <<number.name<<" division."<<endl;
    cout <<setw(20)<<"Earned:"<<"$ "<<number.total<<" total."<<endl;
    cout <<setw(20)<<"Average:"<<"$ "<<number.average<<endl;
   
}



