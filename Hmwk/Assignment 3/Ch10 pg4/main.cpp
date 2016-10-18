/* 
 * File:   main.cpp
 * Author: Jimmy
 * Created on October 16, 2016, 10:00 PM
 * Purpose:Chapter 10 program 4
 */

#include <iostream>
#include <cstdlib>
#include <string>
#include <cstring>
#include <iomanip>
#include <fstream>
using namespace std;

int numberOfWords(char *string,int size);
float letterCount(int wordCount,char *string,int size);


int main(int argc, char** argv) {
    const int size = 81;
    char string[size];
    int wordCount;
    float average;
    char *stringPtr;
    stringPtr = &string[0];
 
    //ask the user to enter the word
    cout <<"Enter the word to get the count: "<<endl;
    cin.get(string,size);
 
    //Call the function
    wordCount = numberOfWords(stringPtr, size);
    average = letterCount(wordCount, string, size);
    
    //output the word count
    cout << "The number of words you enter is " << wordCount << "."<<endl;
    cout << "The average number of each word is "<<average<<".";
    return 0;
}

//this function will accept the number of word
int numberOfWords(char *string, int size){
    char End = 'a';
    int numWord = 0;
    char firstSpaceCheck= ' ';
    bool firstSpaceFlag= false;
    
    for (int count = 0; (count < size) && (End != 0); count++){
        End = string[count];
	if ((firstSpaceCheck != string[count]) || (firstSpaceFlag == true && strlen(string) != 0 )){
            firstSpaceFlag = true;
            if ((End == ' ') && (string[count + 1] != ' '))
            numWord++;
            if (End == 0)
            numWord++;
            }
	}
    return numWord;
}
 

float letterCount(int wordCount, char *string, int size){
    float total = 0;
    float average =0;
 
    for (int count = 0; (count < size) && (string[count] != 0);count++){
	if ((string[count] >= 65) && (string[count] <= 122))
	total++;
    }
    //Check for no words
    if (wordCount != 0)
    average = total / wordCount;
    
    return average;
}