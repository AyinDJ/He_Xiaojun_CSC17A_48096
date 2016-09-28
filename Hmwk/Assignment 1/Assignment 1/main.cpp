/* 
 * File:   main.cpp
 * Author: Jimmy (Xiaojun He)
 * Created on September 27, 2016, 8:12 PM
 * Purpose: Assignment 1
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <string>
#include <iomanip>
#include <fstream>
using namespace std;

//Function
void pg1();//9.1
void pg2();//9.2
void pg3();//9.4
void pg4();//9.5
void pg5();//9.6
void pg6();//9.7
void pg7();//9.9
void pg8();//9.10
int *getarray(int);//get array for 9.1
void prtArr(int *,int ,int );//print the array for 9.2
void mrkSrt(int *,int );//mark the sort for 9.2
void average(int *a,int n);//calculate the average of the number for 9.2&9.4
void mrkSrt(int *,string *,int );//mark the sort for 9.4
void prtArr(int *,string *,int,int);//print the array for 9.4
int doSomething(int *x,int*y);//do something for 9.5
void seltSrt(int *[], int);//sort the pointer array for 9.6&9.7
void showAry(int *, int);//Output the original array for 9.6&9.7
void pnArPtr(int *[], int);//Output the sorted array for 9.6&9.7
float median_value(int *arrptr,int n);//median for value for 9.9
int *Reverse(int *,int);//Reverse for 9.10


int main(int argc, char** argv) {
    //Declare variable
    int choise;
    //Display the menu
    do{
    cout<<"*******************Menu*******************"<<endl;
    cout<<"1.Array Allocator"<<endl;//9.1
    cout<<"2.Test Scores"<<endl;//9.2
    cout<<"3.Test Scores 2"<<endl;//9.4
    cout<<"4.Pointer Rewrite"<<endl;//9.5
    cout<<"5.Case Study Modification1"<<endl;//9.6
    cout<<"6.Case Study Modification2"<<endl;//9.7
    cout<<"7.Median Function"<<endl;//9.9
    cout<<"8.Reverse Array"<<endl;//9.10
    cout<<"0.Exit the program"<<endl;
    
    //check the number 
    do{
        cout<<"Please select the program(0 to 10)"<<endl;
        cin>>choise;
        if(choise<0||choise>8)
            cout<<"Invalid input"<<endl;
    }while(choise<0||choise>8);
    
    //select program
    switch(choise) {
            case 1: pg1(); break;
            case 2: pg2(); break;
            case 3: pg3(); break;
            case 4: pg4(); break;
            case 5: pg5(); break;
            case 6: pg6(); break;
            case 7: pg7(); break;
            case 8: pg8(); break;;
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
    int number;
    int *array;
    cout << "Enter the number of elements: ";
    cin >> number;
    array = getarray(number);
    cout << "The elements in the dynamic array: ";
    for(int i = 0; i < number; i++)
    cout << *(array + i) << " ";
    cout << endl;
    delete [] array;
}

void pg2(){
    int size;
    int num;
    int pl=5;
    //input and check
    do {
        cout<<"How many numbers would you like to input?"<<endl;
        cin>>size;
        if(size<1)
            cout<<"Invalid input"<<endl;
    } while(size<1);
    //declare the dynamic array
    int *arr=new int[size];
    //prompt user for the contents of array
    for(int i=0;i<size;i++) {
        do {
            cout<<"#"<<(i+1)<<": ";
            cin>>num;
            if(num<0)
                cout<<"Invalid input"<<endl;
            else
                *(arr+i)=num;
        }while(num<0);
    }
    cout<<endl;
    //Output the array before sorting
    cout<<"You'd already inputted:"<<endl;
    prtArr(arr,size,pl);
    
    //sorting and output array
    mrkSrt(arr,size);
    cout<<endl<<"After sorting"<<endl;
    prtArr(arr,size,pl);
    average(arr,size);//get the average
    delete [] arr;
    arr=0;
}

void pg3(){
    int size;
    int num;
    int pl=5;//per line
    string name;
    //Prompt user for size
    do {
        cout<<"How many numbers would you like to input?"<<endl;
        cin>>size;
        if(size<1)
            cout<<"Invalid input"<<endl;
    } while(size<1);
    //declare the dynamic array
    int *arr=new int[size];
    string *str=new string[size];
    //prompt user for the contents of array
    cout<<"First input score,then input last name"<<endl;
    for(int i=0;i<size;i++) {
        do {
            cout<<"#"<<(i+1)<<": ";
            cin>>num>>name;
            if(num<0) {
                cout<<"Invalid input"<<endl;
            } else {
                *(arr+i)=num;
                *(str+i)=name;
            }
        }while(num<0);
    }
    cout<<endl;
    //Output the array before sorting
    cout<<"You'd already inputted:"<<endl;
    prtArr(arr,str,size,pl);
    
    //sorting and output array
    mrkSrt(arr,str,size);
    cout<<endl<<"After sorting"<<endl;
    prtArr(arr,str,size,pl);
    average(arr,size);//get the average 
    delete [] arr;
    delete [] str;
    str=0;
    arr=0;
}

void pg4(){
    int x = 10, y = 5;
    cout<<"x,y values before function call: "<<x<<" "<<y<<endl;
    cout<<"Result: "<<doSomething(&x,&y)<<endl;
    cout<<"x,y value after function call: "<<x<<" "<<y<<endl;
}

void pg5(){
        //declare variables
    int size;//size of array
    const int SIZE=1000;//size for new array
    //prompt user for size of array
    do {
        cout<<"Input the size of array"<<endl;
        cin>>size;
        if(size<1)
            cout<<"Invalid input"<<endl;
    }while(size<1);
    //dynamic allocate array
    int *arr=new int[size];
    int *arrPtr[SIZE]={};//array for pointer
    //Prompt user to input the number for the array
    cout<<"Input the numbers for the array"<<endl;
    for(int i=0;i<size;i++) {
        cout<<"#"<<(i+1)<<": ";
        cin>>*(arr+i);
    }
    
    for (int i=0;i<size;i++)
        arrPtr[i] = &(*(arr+i));
        seltSrt(arrPtr, size);
        
    cout << "The array, sorted in ascending order are: \n";
    pnArPtr(arrPtr, size);
    cout << "The array, in their original order are: \n";
    showAry(arr, size);
    //delete the dynamic array
    delete [] arr;
    arr=0;
}

void pg6(){
    const int SIZE=15;//size for new array
    int arr[SIZE]={5,100,5,25,10,5,25,5,5,100,10,15,10,5,10};
    int *arrPtr[SIZE];//array for pointer
    
    for (int i=0;i<SIZE;i++)
        arrPtr[i] = &(*(arr+i));
        seltSrt(arrPtr, SIZE);
    cout << "The array, sorted in ascending order are: \n";
    pnArPtr(arrPtr, SIZE);
    cout << "The array, in their original order are: \n";
    showAry(arr, SIZE);
}

void pg7(){
    int *array=new int[20];
    int i,n;
    double Median;
    cout<<"Enter size of array: ";
    cin>>n;
    for(i=0;i<n;i++){
        cout<<"Enter the number #"<<i+1<<":";
        cin>>*(array+i);
    }
    Median=median_value(array,n);
    cout<<"Median is: "<<Median;
}

void pg8(){
    int size;
    //input the size and check
    do {
        cout<<"Input the size of the array"<<endl;
        cin>>size;
        if(size<1)
            cout<<"Invalid input"<<endl;
    }while(size<1);
    int *arr=new int[size];//a dynamic array
    int *brr=new int[size];//another dynamic array
    //prompt user for contents of array
    for(int i=0;i<size;i++) {
        cout<<"#"<<(i+1)<<": ";
        cin>>*(arr+i);
    }
    //output the inputted array
    cout<<"You'd input:"<<endl;
    for(int i=0;i<size;i++) {
        cout<<*(arr+i)<<" ";
    }
    //Reverse
    brr=Reverse(arr,size);
    //Output the reversed array
    cout<<endl<<"After Reverse..."<<endl;
    for(int i=0;i<size;i++) {
        cout<<*(brr+i)<<" ";
    }
    delete [] arr;
    delete [] brr;
    brr=0;
    arr=0;
}

//get array for 9.1
int *getarray(int number){
    int *arrayPtr = new int[number];
    for(int i = 0; i < number; i++){
        cout << "Enter the element " << (i + 1) << ": ";
        cin >> *(arrayPtr + i);
    } 
    return arrayPtr;
} 

//print the array for 9.2
void prtArr(int *a,int n,int pl) {
    for(int i=0;i<n;i++) {
        cout<<setw(4)<<*(a+i);
        if(i%pl==(pl-1)) cout<<endl;
    }
    cout<<endl;
}

//mark the sort for 9.2
void mrkSrt(int *a,int n) {
    for(int i=0;i<n-1;i++) {
        for(int j=i+1;j<n;j++) {
            if(*(a+i)>*(a+j)) {
                int temp=*(a+i);
                *(a+i)=*(a+j);
                *(a+j)=temp;
            }
        }
    }
}

//calculate the average of the number for 9.2&9.4
void average(int *a,int n) {
    //declare average
    float ave=0;
    //sum them
    for(int i=0;i<n;i++) {
        ave+=*(a+i);
    }
    //get the average
    ave=ave/n;
    cout<<setprecision(2)<<fixed;
    cout<<"The average of these number is "<<ave<<endl;
}

//mark the sort for 9.4
void mrkSrt(int *a,string *s,int n) {
    for(int i=0;i<n-1;i++) {
        for(int j=i+1;j<n;j++) {
            if(*(a+i)>*(a+j)) {
                int temp=*(a+i);
                *(a+i)=*(a+j);
                *(a+j)=temp;
                string tem=*(s+i);
                *(s+i)=*(s+j);
                *(s+j)=tem;
            }
        }
    }
}

//print the array for 9.4
void prtArr(int *a,string *s,int n,int pl) {
    for(int i=0;i<n;i++) {
        cout<<setw(4)<<*(a+i)<<" "<<*(s+i)<<endl;
    }
    cout<<endl;
}

//do something for 9.5
int doSomething(int *x,int*y){
    int temp=*x;
    *x=*(y)*10;
    *y=temp*10;
    return *x+*y;
}

//sort the pointer array for 9.6&9.7
void seltSrt(int *arrPtr[], int size) {
    int strt, mxIndex; 
    int *maxElem;
    for (strt = 0; strt < (size - 1); strt++) {
        mxIndex = strt;
        maxElem = arrPtr[strt];
        for(int i=strt+1;i<size;i++) {
            if (*(arrPtr[i])<*maxElem) {
                maxElem = arrPtr[i];
                mxIndex = i;
            }
        }
        arrPtr[mxIndex] = arrPtr[strt];
        arrPtr[strt] = maxElem;
    }
}

//Output the original array for 9.6&9.7
void showAry(int *arr, int size)
{
    for (int i=0;i<size;i++)
        cout<<*(arr+i) << " ";
    cout << endl;
}

//Output the sorted array for 9.6&9.7
void pnArPtr(int *arr[], int size) {
    for (int i= 0;i<size;i++) 
        cout << *(*(arr+i)) << " ";
    cout << endl; 
}

//median for value for 9.9
float median_value(int *arrptr,int n){
    float median;
    if(n%2==0){
        median=(*(arrptr+(n/2))+*(arrptr+(n/2+1)))/2;
    }
    else{
        median=*(arrptr+(n/2));
    }
    return median;
}

//Reverse for 9.10
int *Reverse(int *a,int n) {
    int *b=new int[n];
    for(int i=0;i<n;i++) {
        *(b+i)=*(a+n-i-1);
    }
    return b;
}

