/* 
 * File:   main.cpp
 * Author: Jimmy
 * Created on November 30, 2016, 8:13 PM
 * Project 2 Othello
 */


#include "Othello.h"
using namespace std;

int main(int argc, char** argv) {
    Othello game;
    int maxi,maxj;
    unsigned long  a1, a2;
    ios::sync_with_stdio(false);  
    int x;  
    
    //ask the user enter the number to chose play with person or AI
    cout<<"Welcome to the Othello,are you really to play the game?"<<endl;  
    cout<<"Enter 1 to play the pvp game, enter 2 to play with AI!"<<endl;  
    cin>>x;  
    
    //if the user chose play with AI
    if(x==2)  
    {  
        int maxn;  
        system("cls");    //clear
        //clear the checkerboard
        game.clear();  
        int a, b;  
        // out put the checkerboard
        game.start();  
        while(1)  
        {  
            //ask the user enter the coordinates
            cout<<"Please enter the coordinates for ○"<<endl;  
            expect1:  
            cin>>b>>a;  
            //call the function from the class to check the enter
            int flag=game.judge1(a,b);  
            
            if(a>8||b>8||a<1||b<1||!flag)  
            {  
                cout<<"Unable to select, please enter again!"<<endl;  
                goto expect1;  
            }  
            else  
                //change the coordinate that the user
                //select to ○ from the checkerboard
                game.change1(a, b);  
            system("cls");    //clear
            //out put the checkerboard
            game.start();  
            //check the game have winner or not
            int t=game.win();  
            if(t)  
                break;  
            //end it
            Sleep(2000);  
            maxn=-1;  
            for(int i=1;i<=8;i++)  
            {  
                for(int j=1;j<=8;j++)  
                {  
                    if(game.num(i, j)>=maxn)  
                    {  
                        maxn=game.num(i, j);  
                        maxi=i;  
                        maxj=j;  
                    }  
                }  
            }  
            //change the coordinate that the AI
            //select to ● from the checkerboard
            game.change2(maxi,maxj);  
  
            system("cls");    //clear
            //out put the checkerboard
            game.start();  
            //check the game have winner or not
            t=game.win();  
            if(t)  
                break;  
  
        }  
    }  
    else  
    {  
        system("cls");    //clear
        //clear the checkerboard
        game.clear();  
        int n, m;  
        // out put the checkerboard
        game.start();  
        //when the user enter to play pvp game,
        while(1)  
        {  
            //ask the user enter the coordinates
            cout<<"Please enter the coordinates for ○"<<endl;  
            Electrics1:  
            cin>>m>>n;  
            //call the function from the class to check the enter
            int flag=game.judge1(n,m);  
            if(n>8||m>8||n<1||m<1||!flag)  
            {  
                cout<<"Unable to select, please enter again!"<<endl;  
                goto Electrics1;  
            }  
            else  
                //change the coordinate that the user
                //select to ○ from the checkerboard
                game.change1(n, m);  
            system("cls");    //clear
            
            // out put the checkerboard
            game.start();  
            //check the game have winner or not
            int t=game.win();  
            
            //for the other player
            if(t)  
                break;  
            cout<<"Please enter the coordinates for ●"<<endl;  
            Electrics2:  
            cin>>m>>n;  
            //call the function from the class to check the enter
            flag=game.judge2(n,m);  
            if(n>8||m>8||n<1||m<1||!flag)  
            {  
                cout<<"Unable to select, please enter again!"<<endl;  
                goto Electrics2;  
            }  
            else  
                //change the coordinate that the user
                //select to ● from the checkerboard
                game.change2(n, m);  
            system("cls");    //clear
            // out put the checkerboard
            game.start();  
            //check the game have winner or not
            t=game.win();  
            if(t)  
                break;  
        }  
    }
    return 0;
}

