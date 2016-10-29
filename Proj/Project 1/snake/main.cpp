/* 
 * File:   main.cpp
 * Author: Jimmy
 * Created on October 24, 2016, 4:13 PM
 * project 1
 */


//library
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <stdlib.h>
#include <conio.h>
using namespace std;


//set the point x and y
struct setpoint{
    int x, y;
};


//set the enum to set the direction
enum eDirecton{STOP=0,LEFT,RIGHT,UP,DOWN};
eDirecton dir;


//the function to draw
//include the map , snake and the fruit
void draw(int width,int height,int x,int y,
           int fruitX,int fruitY,int nTail,
           int tailX,int tailY,int score);
//input thing in the game 
//it use w a s d to control the snake
//w is up, s is down, a is left, d is right
void input(bool);
//the function for show the snake hand and body
//it also calculate the score
void logic(int width,int height,int x,int y,
            int fruitX,int fruitY,int nTail,
            int tailX,int tailY,int score,bool gameover);


int main(int argc, char** argv) {
    bool gameover;              //check game over
    const int width=20;         //set the width is 20
    const int height=20;        //set the height is 20
    int x, y;                   
    setpoint fruit;             //the fruit point
    int score;                  //score in the game
    int tailX[100],tailY[100];  //the tail for the snake
    int nTail;                  //number of tail
    
    
    gameover=false;
    dir = STOP;
    x=width/2;
    y=height/2;
    //random set the fruit
    fruit.x=rand() % width;
    fruit.y=rand() % height;
    score=0;
   
    
    //play  the game
    while(!gameover){
        draw(width,height,x,y,fruit.x,
                fruit.y,nTail,tailX,tailY,score);
        input();
        logic(width,height,x,y,fruit.x,
                fruit.y,nTail,tailX,tailY,score,gameover);
    }
    
    return 0;
}


//the function to draw
//include the map , snake and the fruit
void draw(int width,int height,int x,int y,
          int fruitX,int fruitY,int nTail,
          int tailX,int tailY,int score){
    system("clear");//clear
    
    //set the width wall
    for(int i=0;i<width+2;i++)
        cout<<"#";
    cout<<endl;
    
    
    //set the height wall
    for(int i=0;i<height;i++){
        for(int j=0;j<width;j++){
            //set the wall for left
            if(j==0)
                cout<<"#";
            
            //set the snake hand
            if(i==y && j==x)
                cout<<"O";
            
            //show the fruit
            else if(i==fruitX && j==fruitY )
                cout<<"F";
            
            //show the snake tail
            //the tail will be follow the snake hand to move
            else{
                bool print = false;
                for(int k=0; k<nTail;k++){
                    if(tailX[k]==j&&tailY[k]==i){
                        cout<<"o";
                        print = true;
                    }
                }
                //after the snake tail move 
                //reset the tail to space
                if(!print)
                        cout<<" ";
            }
                
            //set the wall for right
            if(j==width-1)
                cout<<"#";
        }
        
        cout<<endl;
    }
    for(int i=0;i<width+2;i++)
        cout<<"#";
    cout<<endl;
    
    //show the score
    cout<<"Score :"<<score<<endl;
}


//input thing in the game 
//it use w a s d to control the snake
//w is up, s is down, a is left, d is right
void input(bool gameover){
    //get the  button from key board
    //it don't want pass the enter
    if(_kbhit()){
        //the key in key board
        //a mean turn left
        //d mean turn right
        //w mean go up
        //s mean go down
        switch(_getch()){
            case 'a':
                dir = LEFT;
                break;
                
            case 'd':
                dir = RIGHT;
                break;
                
            case 'w':
                dir = UP;
                break;
                
            case 's':
                dir = DOWN;
                break;
                
            case 'x':
                gameover = true;
                break;      
        }
    }
}

//the function for show the snake hand and body
//it also calculate the score
void logic(int width,int height,int x,int y,
            int fruitX,int fruitY,int nTail,
            int tailX,int tailY,int score,bool gameover){
    //mark down the point for the snake tail
    //and mark the number of tail
    //that mean how long is the tail
    int prevX = tailX[0];
    int prevY = tailY[0];
    int prev2X, prev2Y;
    tailX[0] = x;
    tailY[0] = y;
    //get the number for the tail
    //and mark all the point for the tail
    for(int i=1;i<nTail;i++){
        prev2X = tailX[i];
        prev2Y = tailY[i];
        tailX[i] = prevX;
        tailY[i] = prevY;
        prevX = prev2X;
        prevY = prev2Y;
    }
    //get the button from the key board
    //x is for left and right
    //if x -1, that mean turn left
    //if x +1, that mean turn right
    //y is fro up and down
    //if y-1. that mean up
    //if y+1, that mean down
    switch(dir){
        
        case LEFT:
            x--;
            break;
            
        case RIGHT:
            x++;
            break;
            
        case UP:
            y--;
            break;
            
        case DOWN:
            y++;
            break;
            
        default:
            break;
            
    }
    
    
    //if the snake hand in to the wall
    //the game is over
    if(x>width||x<0||y>height||y<0)
        gameover = true;
    
    //if the snake hand get in to snake tail
    //the game is over
    for(int i=0;i<nTail;i++)
        if(tailX[i]==x&&tailY[i]==y)
            gameover = true;
    
    //if the snake hand get in to the fruit
    //that mean the snake eat the fruit
    //the fruit will reset
    //and the tail of snake will +1
    if(x==fruitX && y==fruitY){
        score+=10;
        fruitX = rand()% width;
        fruitY = rand()% height;
        nTail++;
    }
}

