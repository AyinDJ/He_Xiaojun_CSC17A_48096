/* 
 * File:   main.cpp
 * Author: Jimmy
 * Created on October 4, 2016, 7:44 PM
 * Purpose:Chapter 11 program 6
 */

#include <iostream>
#include <cstdlib>
#include <string>
#include <iomanip>
#include <fstream>

using namespace std;

#include "Players.h"

void getPlayerData(SoccerData &);
float totalPoints(SoccerData[], int); 
float highestPoints(SoccerData[], int, int &);
void showTeam(SoccerData[], int);  

int main(int argc, char** argv) {

    const int numPlayers = 3;
    SoccerData team[numPlayers];
    int highestPlayer;
    
    for (int index = 0; index < numPlayers; index++){
        cout << endl;
        cout << " Player: " << (index+1) <<endl;
        getPlayerData(team[index]);
    }
    
    cout<<endl;
    cout << "The Total amount of points for the team is: " 
            << totalPoints(team, numPlayers)<<endl<<endl;
    
    float mostpoints = highestPoints(team, numPlayers, highestPlayer);
    cout << "Highest points " << mostpoints <<endl;
    cout << "Player " << highestPlayer << " had the most points."<<endl<<endl;

    
    showTeam(team, numPlayers);
    
    return 0;
}

void getPlayerData(SoccerData &data){
    cout << "\t What is the name of the player: ";
    cin >> data.name;
    
    cout << "\t What is the uniform number of the player: ";
    cin >> data.number;
    
    cout << "\t Total points scored for the player: ";
    cin >> data.points;
    
    while (data.points < 0){
        cout << "The score can not be a negative number. \n";
        cout << "Please re-enter the score. \n";
        cin >> data.points;
    }
}

float totalPoints(SoccerData data[], int size){
    float totalPoints = 0;
    for (int index = 0; index < size; index++)
        totalPoints += data[index].points;
    return totalPoints;
}

float highestPoints(SoccerData data[], int size, int &player){
    float highest =0;
    
    for (int index = 0; index < size; index++){
        if (data[index].high > highest){
            highest = data[index].high;
            player = index +1;
        }
    }
    return highest;
}

void showTeam(SoccerData data[], int size){
    float totalForTeam=0;
    for (int index = 0; index < size; index++){
        cout << "Player name: " << data[index].name << endl;
        cout << "Player number: " << data[index].number << endl;
        cout << "Points for player: " << data[index].points << endl<<endl;
        totalForTeam += data[index].points;
    }
    cout << "Total Points for team: " << totalForTeam << endl;
}
