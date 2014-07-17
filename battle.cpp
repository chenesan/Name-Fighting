#ifndef CHARACTER_H
#define CHARACTER_H

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

class character
{
    //friendship with battle.h
    friend bool fighting(character player1,character &player2);
    friend bool hit_or_not(character hitter, character defenser);
    friend int damage_cal(character hitter, character &defenser);
public:
    //constructor
    character(string s);
    character();
    //access the ability
    int access_atk(){return attack;}
    int access_def(){return defense;}
    int access_agl(){return agility;}
    int access_hp(){return health;}
    int access_spd(){return speed;}
    string access_name(){return name;}

    //check the person live or not
    bool live_or_not();

    //print all ability
    void print_total();
private:
    string name;
    int attack;
    int defense;
    int agility;
    int speed;
    int health;
    bool live=1;
};



#endif // CHARACTER_H
