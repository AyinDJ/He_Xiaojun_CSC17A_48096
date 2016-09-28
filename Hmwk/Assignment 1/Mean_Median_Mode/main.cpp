/* 
 * File:   main.cpp
 * Author: Jimmy（Xiaojun He)
 * Created on September 27, 2016, 5:54 PM
 * Purpose: Mean_Median_Mode
 */

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <iomanip>
using namespace std;

//function prototypes
float mean(int *, int);
float median(int *, int);
int mode(int *, int);
void sort(int *, int);


int main(int argc, char** argv) {
    const int SIZE = 10;
    int *array;
        for (int count = 0; count < SIZE; count++)
        {
            cout << "Enter the No." << (count + 1) << ": ";
            cin >> array[count];

            while (array[count] < 0)
            {
                cout << "Invalid number. Please enter in a positive number: ";
                cout << "\nEnter the No." << (count + 1) << ": ";
                cin >> array[count];
            }

        }
    
        sort(array, SIZE);
        
        cout << fixed << showpoint << setprecision(1);
        cout << "\nThe mean is: ";
        cout << mean(array, SIZE) << endl;
        cout << "\nThe median is: ";
        cout << median(array, SIZE) << endl;
        cout << "\nThe mode is: ";
        cout << mode(array, SIZE) << endl;

        delete[] array;
        array = 0;

    return 0;
}

void sort(int *array, int SIZE)
{
    int temp;
    for (int i = 0; i < SIZE; i++){
        for (int j = i + 1; j < SIZE; j++){
            if (array[i] > array[j])
{
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
}


float mean(int *array, int SIZE)
{
    double total = 0;
    double average;

    for (int count = 0; count < SIZE; count++)
    {
        total += array[count];
    }
    average = total / SIZE;
    return average;
}


float median(int *array, int SIZE)
{
    double median = 0.0;
    cout << fixed << showpoint << setprecision(1);


    if (SIZE % 2 == 0)
    {
        median = (array[SIZE / 2 - 1] + array[(SIZE / 2)]) / 2.0;
    }
    else
        median = array[SIZE / 2];

    return median;
}


int mode(int *array, int SIZE)
{
    int mode = 0;
    int val = 0;
    int index;


    for (index = 0; index < SIZE - 1; index++)  // note the - 1 here
    {
        if (array[index] == array[index + 1])
        {
            mode++;
            val = *(array + index);
        }
    }
    if (val > 0)
        return val;
    else
        return -1;

}
