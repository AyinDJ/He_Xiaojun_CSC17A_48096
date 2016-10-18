/* 
 * File:   main.cpp
 * Author: Jimmy
 * Created on October 16, 2016, 11:37 PM
 * Purpose:Chapter 10 program 6
 */

#include <iostream>
#include <cstdlib>
#include <string>
#include <cstring>
#include <iomanip>
#include <fstream>
using namespace std;

int vowelcount(char *);
int consonantcount(char *);

int main(int argc, char** argv) {
    string answer;
    int count = 0;
    char*array = new char[1000];
    
    do{
    cout<<"input the sentence: ";
    cin.getline(array,1000);
    
    cout<<"The length is "<<strlen(array)<<endl;
    cout<<"The number of vowel is "<<vowelcount(array)<<endl;
    cout<<"The number of consonant is "<<consonantcount(array)<<endl;
    
    delete [] array;
    array=0;
    
    cout<<"Type \"E\" to exit the program, or type anything to continue"<<endl;
    cin>>answer;
    count++;
    } while(answer!="E"&&answer!="e");
    cout<<"You run this program "<<count<<" times"<<endl;
    

    return 0;
}

int vowelcount(char *array) {
    int count=0;
    for(int i=0;i<strlen(array);i++) {
        if(array[i]=='a'||array[i]=='e'||array[i]=='i'||array[i]=='o'||
           array[i]=='u'||array[i]=='A'||array[i]=='E'||array[i]=='I'||
           array[i]=='O'||array[i]=='U')  
        {
            count++;
        }
    }
    return count;
}

int consonantcount(char *array) {
    int count=0;
    for(int i=0;i<strlen(array);i++) {
        if(isalpha(array[i])) {
            if(!(array[i]=='a'||array[i]=='e'||array[i]=='i'||array[i]=='o'||
                 array[i]=='u'||array[i]=='A'||array[i]=='E'||array[i]=='I'||
                 array[i]=='O'||array[i]=='U'))  
            {
                count++;
            }
        }
    }
    return count;
}

