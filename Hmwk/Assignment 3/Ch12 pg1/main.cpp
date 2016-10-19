/* 
 * File:   main.cpp
 * Author: Jimmy
 * Created on October 18, 2016, 4:51 PM
 * Purpose:Chapter 12 program 11
 */

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(int argc, char** argv) {
    string filename;
    string input;
    fstream inf;
    
    cout<<"Please enter the file name: ";
    cin>>filename;
    
    inf.open(filename,ios::in|ios::binary);
    
    if(inf){
        getline(inf,input);
        string temp=input;
        
        for(int i=0;i<10;i++){
            cout<<input;
            getline(inf,input);
            if(temp==input){
                cout<<"\n"<<endl;
                break;
            }
        }
        inf.close();
        cout<<" The first 10 lines have been displayed"<<endl;
    }else
        cout<<filename<< "could not be opened. \n";
    
    cin.get();
    cin.get();
    
    return 0;
}

