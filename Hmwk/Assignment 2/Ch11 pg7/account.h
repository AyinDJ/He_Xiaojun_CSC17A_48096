/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   account.h
 * Author: Jimmy
 *
 * Created on October 4, 2016, 10:18 PM
 */

#ifndef ACCOUNT_H
#define ACCOUNT_H

struct account{
    char name[30];
    char address[30];
    char city[16];
    char state[30];
    char zip[5];
    char tele[12];
    float acc;
    char date[20];
    float total[30]; 
};



#endif /* ACCOUNT_H */

