/* 
 * File:   Othello.h
 * Author: Jimmy
 * Created on December 7, 2016, 1:06 AM
 * class for Othello
 */

#ifndef OTHELLO_H
#define OTHELLO_H

//library
#include<iostream>  
#include<algorithm>  
#include<windows.h>  
#include<cstring>  
#include<ctime>  
#include<cmath>  
#include<cstdio> 
using namespace std;


class Othello{
public:
    //the function to calculate the ● and ○ number
    int counter(int n);
    // out put the checkerboard
    void start();
    //check the game have winner or not
    int win();
    //clear the checkerboard
    void clear();
    //change the coordinate that the user
    //select to ○ from the checkerboard
    void change1(int x, int y);
    //change the coordinate that the user
    //select to ● from the checkerboard
    void change2(int x, int y);
    //check the enter for ○ select
    int judge1(int x, int y);
    //check the enter for ● select
    int judge2(int x, int y);
    //the function to calculate the AI select
    int num(int x, int y);
private:
    // the array for the checkerboard
    int  chessmen[9][9];  
};

#endif /* OTHELLO_H */

