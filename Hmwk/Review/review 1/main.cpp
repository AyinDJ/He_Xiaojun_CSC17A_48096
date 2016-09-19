/* 
 * File:   main.cpp
 * Author: Jimmy(Xiaojun He)
 * Created on September 18, 2016, 3:42 PM
 * Purpose: Review 1
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <string>
#include <iomanip>
#include <fstream>
using namespace std;

//Function
void pg1();//Chapter 3 problem 12
void pg2();//Chapter 3 problem 13
void pg3();//Chapter 4 problem 6
void pg4();//Chapter 4 problem 10
void pg5();//Chapter 4 problem 4
void pg6();//Chapter 5 problem 11
void pg7();//Chapter 6 problem 7
void pg8();//Chapter 7 problem 6
void pg9();//Chapter 8 problem 7
void pg10();//Chapter 5 problem 11
float celsius(int);//convert f to c for program 6
void Sort(string [],int); //Mark sort for string array for program 9 
int Search(string,const string [],int);//Binary search for program 9 

int main(int argc, char** argv) {
    //Declare variable
    int choise;
    //Display the menu
    do{
    cout<<"*******************Menu*******************"<<endl;
    cout<<"1.Celsius to Fahrenheit"<<endl;//3.12
    cout<<"2.Currency"<<endl;//3.13
    cout<<"3.Mass and Weight"<<endl;//4.6
    cout<<"4.Days in a Month"<<endl;//4.10
    cout<<"5.Areas of Rectangles"<<endl;//4.4
    cout<<"6.Population"<<endl;//5.11
    cout<<"7.Celsius Temperature Table"<<endl;//6.7
    cout<<"8.Rain or Shine"<<endl;//7.6
    cout<<"9.Binary String Search"<<endl;//8.7
    cout<<"10.Sum of Numbers"<<endl;//5.1
    cout<<"0.Exit the program"<<endl;
    
    //check the number 
    do{
        cout<<"Please select the program(0 to 10)"<<endl;
        cin>>choise;
        if(choise<0||choise>10)
            cout<<"Invalid input"<<endl;
    }while(choise<0||choise>10);
    
    //select program
    switch(choise) {
            case 1: pg1(); break;
            case 2: pg2(); break;
            case 3: pg3(); break;
            case 4: pg4(); break;
            case 5: pg5(); break;
            case 6: pg6(); break;
            case 7: pg7(); break;
            case 8: pg8(); break;
            case 9: pg9(); break;
            case 10: pg10(); break;
            case 0: {
                cout<<"This program is end!!"<<endl;
                break;
                }
    }
    //if the number not 0, run again
    if(choise!=0){
        cout<<endl<<endl;
        cout<<"Press enter to continue";
        cin.ignore();
        cin.ignore();
        }
    }while(choise!=0);

    return 0;
}

void pg1(){
    //Declare variable
    float F, C;
    float nn=9/5;
    
    //input the Celsius temperatures
    cout<<"Enter the Celsius temperatures :"<<endl;
    cin>>C;
    
    //calculates
    F=nn*C+32;
    
    //output
    cout<<"Fahrenheit temperatures is "<<F<<endl;
}

void pg2(){
    //Declare variable
    float dollar;
    float YEN_PER_DOLLAR = 98.93;
    float EUROS_PER_DOLLAR = 0.74;
    float yen;
    float euros;
    
    //input the dollar
    cout<<"How many dollar you want to change?"<<endl;
    cin>>dollar;
    
    //calculates
    yen=dollar*YEN_PER_DOLLAR;
    euros=dollar*EUROS_PER_DOLLAR;
    
    //output
    cout<<setprecision(2)<<fixed;
    cout<<" You can get "<<yen<<" Japanese yen."<<endl;
    cout<<" Also you can get "<<euros<<" Euros."<<endl;
}

void pg3(){
    //declare variables
    float wei, mass;
    
    //input mass
    cout<<"Enter the mass in kilograms:"<<endl;
    cin>>mass;
    
    //calculate the weight
    wei=mass*9.8;
    
    //determine if the object is too heavy or too light
    if(wei>1000)
        cout<<"The object is too heavy."<<endl;
    else if(wei<10)
        cout<<"The object is too light."<<endl;
    else
        cout<<"The object is fine!!"<<endl;
}

void pg4(){
    //declare variable
    int month;
    int year;
    int day;
    int test;
    //input the month and year
    cout<<"Enter the month (1-12):";
    cin>>month;
    cout<<"Enter the year :";
    cin>>year;
    //calculate the day
    if (month==1){day=31;
    }else if (month==2){
        //test the year is leap or not
        test=year%4;
        if(test==0){
            day=28;
        }else{day=29;}
    }else if(month==3)day=31;
     else if(month==4)day=30;
     else if(month==5)day=31;
     else if(month==6)day=30;
     else if(month==7)day=31;
     else if(month==8)day=31;
     else if(month==9)day=30;
     else if(month==10)day=31;
     else if(month==11)day=30;
     else if(month==12)day=31;
    //output the days
    cout<<day<<"days."<<endl;
                
}

void pg5(){
    //declare variables
    float length1, length2, width1 ,width2 ,areas1, areas2;
    
    //input variables
    do{
    cout<<"Enter the length of No.1 rectangle!"<<endl;
    cin>>length1;
    if(length1<=0)
        cout<<"Invalid input"<<endl;
    }while(length1<=0);
    do{
    cout<<"Enter the width of No.1 rectangle!"<<endl;
    cin>>width1;
    if(width1<=0)
        cout<<"Invalid input"<<endl;
    }while(width1<=0);
    do{
    cout<<"Enter the length of No.2 rectangle!"<<endl;
    cin>>length2;
    if(length2<=0)
        cout<<"Invalid input"<<endl;
    }while(length2<=0);
    do{
    cout<<"Enter the width of No.2 rectangle!"<<endl;
    cin>>width2;
    if(width2<=0)
        cout<<"Invalid input"<<endl;
    }while(width2<=0);
    
    //calculate
    areas1=length1*width1;
    areas2=length2*width2;
    
    //output and Compared
    if(areas1==areas2)
        cout<<"The two rectangle is same."<<endl;
    else if(areas1>areas2)
        cout<<"The No.1 rectangle is bigger"<<endl;
    else
        cout<<"the No.2 rectangle is bigger"<<endl;
}

void pg6(){
    //declare variables
    float number;
    float percent;
    float day;
  
    //input the number check the number
    do{
    cout<<"Enter the number for the starting number of organisms:";
    cin>>number;
    if (number<2)
        cout<<"Invalid input"<<endl;
    }while(number<2);
    
    //input the percent check the number
    do{
    cout<<"Enter the average daily population increase (as a percentage)";
    cin>>percent;
    if (percent<0)
        cout<<"Invalid input"<<endl;
    }while(percent<0);
    
    //input the day check the number
    do{
    cout<<"Enter the day they will multiply";
    cin>>day;
    if (day<1)
        cout<<"Invalid input"<<endl;
    }while(day<1);
    
    //calculate the size for population for each day
    for(int i=1; i<=day;i++){
        number=number*(1+(percent/100));
        cout<<setprecision(0)<<fixed;
        cout<<"Number "<<i<<"day, the size of the population is "
                <<number<<endl;
    }
}

void pg7(){
    //formatted Output the results with a table
    cout<<setprecision(1)<<fixed;
    cout<<"Fahrenheit"<<"   "<<"Celsius"<<endl;
    cout<<"--------------------"<<endl;
    for(int f=0;f<=20;f++) {
        cout<<setw(5)<<f<<setw(13)<<celsius(f)<<endl;
    }
}

void pg8(){
    //declare variables
    int month = 3;
    int day = 30;
    char weather[month][day];
    int sun, rain, cloudy;
    int totsun = 0;
    int totrain = 0;
    int totcloudy = 0;
    int lgrain = 0;
    ifstream inputFile;
    
    //Open file
    inputFile.open("RainOrShine.txt");
    if(!inputFile)
        cout<<"Error opening data file.";
    else{
        for(int row = 0;row<month;row++){
            for(int col = 0; col<day;col++){
                inputFile>>weather[row][col];
            }
        }
    }
    inputFile.close();
    
    //display the report
    cout<<"             Three month weather report             "<<endl;
    cout<<"----------------------------------------------------"<<endl;
    for(int row = 0; row<month; row++){
        sun = rain = cloudy = 0;
        for(int col = 0; col<day; col++){
            switch(weather[row][col]){
                case 'S' :sun++;
                break;
                case 'R' :rain++;
                break;
                case 'C' :cloudy++;
                break;
            }
        }
        
        //display the month number
        cout<<"For ";
        if(row ==0)
            cout <<"June"<<endl;
        else if(row == 1)
            cout <<"July"<<endl;
        else if(row == 2)
            cout<<"August"<<endl;
        
          cout<<"Rainy : "<<rain<<endl;
          cout<<"Sunny : "<<sun<<endl;
          cout<<"Cloudy : "<<cloudy<<endl;
        
        //calculate the totals for three month
        totsun +=sun;
        totrain+=rain;
        totcloudy+=cloudy;
        
        //Calculate the most rain day
        if(lgrain<rain)
            lgrain = row;
    }
    //Display the total
    cout<<"For the total:"<<endl;
    cout<<"Rainy : "<<totrain<<endl;
    cout<<"Sunny : "<<totrain<<endl;
    cout<<"cloudy : "<<totcloudy<<endl;
    
    //Display the largest rainy day for month
    cout <<"The month with the largest rainy days is ";
            if(lgrain == 0)
               cout<<"June."<<endl;
            else if (lgrain == 1)
                cout<<"July."<<endl;
            else if (lgrain == 2)
                cout<<"August."<<endl;
}

void pg9(){
    //declare variables
    const int SIZE = 20;
    string str;
    //String array
     string names[SIZE] = {"Collins, Bill", "Smith, Bart", "Allen, Jim",
                            "Griffin, Jim", "Stamey, Marty", "Rose, Geri",
                            "Taylor, Terri", "Johnson, Jill",
                            "Allison, Jeff", "Looney, Joe", "Wolfe, Bill",
                            "James, Jean", "Weaver, Jim", "Pore, Bob",
                            "Rutherford, Greg", "Javens, Renee",
                            "Harrison, Rose", "Setzer, Cathy",
                            "Pike, Gordon", "Holland, Beth" } ;
    cout<<"Input a full name"<<endl;
    cin.ignore();
    getline(cin,str);
    //Sort the array
    Sort(names,SIZE);
    //Search the element
    int result=Search(str,names,SIZE);
    
    //Print the result 
    if(result==-1)
        cout<<"The name you searched is not in the array!"<<endl;
    else
    cout<<"The name you searched is in the array!"<<endl;
     
}

void pg10(){
    //declare variables
    int number;
    int sum=0;
    
    //input the number
    do{
    cout<<"Enter the number: ";
    cin>>number;
    if (number<1)
        cout<<"Invalid Input"<<endl;
    }while(number<1);
    
    //use for loop to calculate the sum
    for(int i=1;i<=number;i++){
        sum+=i;
    }
    //output
    cout<<"The sum of all the integers from 1 up to the number entered is "
            <<sum<<endl;
    
}

//convert f to c
float celsius(int f) {
    return (f-32)*5.0f/9;
}

//mark sort
void Sort(string array[],int SIZE) {
    //mark the sort in the array
    for(int i=0;i<SIZE-1;i++) {
        for(int j=i+1;j<SIZE;j++) {
            if(array[i]>array[j]) {
                string temp=array[i];
                array[i]=array[j];
                array[j]=temp;
            }
        }
    }
}

//Binary search
int Search(string str,const string arr[],int SIZE) {
    int begin=0;         //first array
    int end=SIZE-1;      //last array
    int mid;             //the array in midden
    //use the do while loop to find the name in array
    do {
        mid=(begin+end)/2;
        if(str==arr[mid])
            return mid;
        else if(str<arr[mid]) {
            end=mid-1;
        }
        else {
            begin=mid+1;
        }
    }while(begin<=end);
    return -1;
}